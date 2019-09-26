/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 13:16:01 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/20 12:34:22 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int tmp;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
	{
		tmp = nb;
		while (--power > 0)
			nb = nb * tmp;
	}
	return (nb);
}
