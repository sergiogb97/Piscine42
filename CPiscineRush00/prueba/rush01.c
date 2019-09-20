/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_para_norminete.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:14:07 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/08 18:07:48 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int x, char left, char middle, char right)
{
	ft_putchar(left);
	while (x-- > 2)
		ft_putchar(middle);
	if (x > 0)
		ft_putchar(right);
	ft_putchar('\n');
}

void	print_margin(int x, int y, char middle)
{
	while (y-- > 1)
		print_line(x, middle, ' ', middle);
}

void	rush(int x, int y)
{
	char corner_a;
	char corner_b;
	char middle;

	corner_a = '/';
	corner_b = '\\';
	middle = '*';
	if (x > 0)
	{
		print_line(x, corner_a, middle, corner_b);
		if (y-- > 1)
		{
			print_margin(x, y, middle);
			print_line(x, corner_b, middle, corner_a);
		}
	}
}
