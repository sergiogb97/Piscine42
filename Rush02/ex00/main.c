/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 18:17:45 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/22 18:39:06 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

int		main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "Error\n", 6);
	else if (valide_arg(argv[1]))
		take_value(argv[1]);
	else
		write(1, "Error\n", 6);
	return (0);
}
