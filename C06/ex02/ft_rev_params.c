/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 13:11:20 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/20 13:16:36 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	argc--;
	while (argc > 0)
	{
		i = 0;
		while (argv[argc][i] != '\0')
			write(1, &argv[argc][i++], 1);
		argc--;
		write(1, "\n", 1);
	}
	return (0);
}