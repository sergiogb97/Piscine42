/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 18:18:07 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/22 20:15:37 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

int		valide_arg(char *argv)
{
	int i;
	int size;

	size = length(argv);
	if (size > 1 && argv[0] == '0')
		return (0);
	i = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] < 48 || 57 < argv[i])
			return (0);
		i++;
	}
	if (size > 39)
		return (0);
	return (1);
}

void	find_key(int file, char *str)
{
	int		esc;
	int		pos;
	char	buf;

	esc = 0;
	while (!esc)
	{
		pos = 0;
		read(file, &buf, 1);
		while (str[pos++] == buf)
			read(file, &buf, 1);
		if (str[--pos] == '\0')
			esc = 1;
	}
	while (buf == ':' || buf == ' ')
		read(file, &buf, 1);
	while (buf != '\n')
	{
		write(1, &buf, 1);
		read(file, &buf, 1);
	}
	write(1, " ", 1);
}

char	*set_mil(int n)
{
	int		i;
	char	*mil;

	mil = malloc(sizeof(char) * (3 * n + 1));
	mil[0] = '1';
	i = 1;
	while (i < (3 * n + 1))
		mil[i++] = '0';
	mil[i] = '\0';
	return (mil);
}
