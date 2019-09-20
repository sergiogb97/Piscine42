/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_para_norminete.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:14:07 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/08 17:02:54 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char corner, char middle)
{
	ft_putchar(corner);
	while (x-- > 2)
		ft_putchar(middle);
	if (x > 0)
		ft_putchar(corner);
	ft_putchar('\n');
}

void	print_margin(int x, int y, char middle)
{
	while (y-- > 1)
		print_line(x, middle, ' ');
}

void	rush(int x, int y)
{
	char corner;
	char middle_h;
	char middle_v;

	corner = 'o';
	middle_h = '-';
	middle_v = '|';
	if (x > 0)
	{
		print_line(x, corner, middle_h);
		if (y-- > 1)
		{
			print_margin(x, y, middle_v);
			print_line(x, corner, middle_h);
		}
	}
}
