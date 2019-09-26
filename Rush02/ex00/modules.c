/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modulos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 18:45:09 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/22 20:15:08 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

int		hundreds(char *str, int size, int pos)
{
	char	*div;

	if (str[size - pos] != '0')
	{
		part_str(str, &div, 1, pos);
		read_file(div);
		read_file("100");
		free(div);
	}
	pos--;
	if (str[size - pos] == '0' && str[size - (pos - 1)] == '0')
		pos -= 2;
	return (pos);
}

int		tens(char *str, int size, int pos)
{
	char	*div;

	if (str[size - pos] > '1')
	{
		part_str(str, &div, 2, pos);
		read_file(div);
		if (str[size - pos + 1] == '0')
			pos--;
		pos--;
		free(div);
	}
	else if (str[size - pos] == '1')
	{
		part_str(str, &div, 2, pos);
		if (div[0] != 0)
			read_file(div);
		else if (size == 0)
			read_file(div);
		pos -= 2;
		free(div);
	}
	else
		pos--;
	return (pos);
}

int		units(char *str, int pos)
{
	char	*div;

	part_str(str, &div, 1, pos);
	read_file(div);
	pos--;
	free(div);
	return (pos);
}

int		check_mil(char *str, int size, int pos, int mil)
{
	char	*div;

	if (str[size - pos - 1] != '0'
	|| str[size - pos - 2] != '0'
	|| str[size - pos - 3] != '0')
	{
		div = set_mil(mil);
		read_file(div);
	}
	mil--;
	return (mil);
}

void	take_value(char *str)
{
	int		size;
	int		pos;
	int		mil;

	size = length(str) - 1;
	pos = size;
	mil = size / 3;
	while (pos > -1)
	{
		if (pos % 3 == 2)
			pos = hundreds(str, size, pos);
		else if (pos % 3 == 1)
			pos = tens(str, size, pos);
		else if (pos % 3 == 0)
			pos = units(str, pos);
		if (mil != 0 && pos % 3 == 2)
			mil = check_mil(str, size, pos, mil);
	}
	write(1, "\n", 1);
}
