/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:47:14 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/08 18:27:08 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < y && x > 0 && y > 0)
	{
		while (i < x)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == y - 1))
				ft_putchar('A');
			else if ((i == x - 1 && j == 0) || (i == x - 1 && j == y - 1))
				ft_putchar('C');
			else if (i == 0 || i == x - 1)
				ft_putchar('B');
			else if (j == 0 || j == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
		i = 0;
	}
}
