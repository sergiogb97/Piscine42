/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 07:19:23 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/16 10:17:58 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putint(int c)
{
	c += '0';
	write(1, &c, 1);
}

void	print_num(int *num, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		putint(*(num + i));
		i++;
	}
	if (*num != (10 - i))
	{
		putint(-4);
		putint(-16);
	}
}

void	create_num(int *num, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		num[i] = i;
		i++;
	}
	print_num(num, size);
}

void	ft_start_combn(int n)
{
	int i;
	int j;
	int num[n];

	create_num(num, n);
	j = n - 1;
	while (j != 0)
	{
		if (num[j]++ < (10 - n + j))
			print_num(num, n);
		else
		{
			j--;
			if (num[j] < (10 - n + j))
			{
				num[j]++;
				while ((i = j + 1) < n)
				{
					num[i] = num[i - 1] + 1;
					j++;
				}
				print_num(num, n);
			}
		}
	}
}

void	ft_print_combn(int n)
{
	int i;

	if (n == 0)
		putint(0);
	if (n == 1)
	{
		i = 0;
		while (i < 10)
		{
			putint(i);
			if (i != 9)
			{
				putint(-4);
				putint(-16);
			}
			i++;
		}
	}
	if (1 < n && n < 10)
	{
		ft_start_combn(n);
	}
}
