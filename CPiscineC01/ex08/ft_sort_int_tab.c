/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:26:48 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/11 15:10:09 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int swap;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (*(tab + i) < *(tab + j))
			{
				swap = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = swap;
			}
			j++;
		}
		i++;
	}
}
