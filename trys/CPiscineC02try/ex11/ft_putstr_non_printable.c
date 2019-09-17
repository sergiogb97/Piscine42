/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 12:31:51 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/17 12:48:50 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	unsigned char	bhexa[2];
	char			tmp;

	while (*str != '\0')
	{
		if (31 < *str)
			write(1, str, 1);
		else
		{
			tmp = (unsigned char)*str / 16;
			if (tmp < 10)
				bhexa[0] = tmp + 48;
			else
				bhexa[0] = tmp + 87;
			tmp = (unsigned char)*str % 16;
			if (tmp < 10)
				bhexa[1] = tmp + 48;
			else
				bhexa[1] = tmp + 87;
			write(1, "\\", 1);
			write(1, &bhexa[0], 1);
			write(1, &bhexa[1], 1);
		}
		str++;
	}
}
