/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 12:09:32 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/19 10:34:26 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		valide_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	convert(int num, char *base)
{
	int			i;
	int			size;
	int			rest;
	long int	val;

	val = num;
	i = 0;
	size = 0;
	if (val < 0)
	{
		val = -val;
		write(1, "-", 1);
	}
	while (base[size])
		size++;
	if (val >= size)
	{
		rest = val % size;
		val /= size;
		convert(val, base);
		write(1, &base[rest], 1);
	}
	else
		write(1, &base[val], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (valide_base(base))
	{
		convert(nbr, base);
	}
}
