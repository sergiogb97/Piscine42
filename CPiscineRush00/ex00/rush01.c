/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:47:34 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/08 18:34:55 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (j <= y && x > 0 && y > 0)
	{
		while (i <= x)
		{
			if ((i == 1 && j == 1) || (j == y && i == x && y > 1 && x > 1))
				ft_putchar('/');
			else if ((j == 1 && i == x) || (i == 1 && j == y))
				ft_putchar('\\');
			else if ((j == 1 || j == y) && (i != 1 && i != x))
				ft_putchar('*');
			else if ((i == 1 || i == x) && (j != 1 && j != y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
		i = 1;
	}
}
