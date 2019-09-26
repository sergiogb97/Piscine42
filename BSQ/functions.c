/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 12:46:15 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/25 02:09:27 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		get_columns(char *file_name)
{
	int		file;
	int		columns;
	char	buf;

	buf = '\0';
	file = read_file(file_name);
	while (buf != '\n')
		read(file, &buf, 1);
	read(file, &buf, 1);
	columns = 0;
	while (buf != '\n')
	{
		columns++;
		read(file, &buf, 1);
	}
	return (columns);
}

char	*get_values(char *file_name)
{
	int		file;
	int		i;
	char	buf;
	char	*values;

	values = malloc(sizeof(char) * 4);
	file = read_file(file_name);
	read(file, &buf, 1);
	while (47 < buf && buf < 58)
		read(file, &buf, 1);
	i = 0;
	while (buf != '\n')
	{
		values[i++] = buf;
		read(file, &buf, 1);
	}
	values[i] = '\0';
	return (values);
}

int		get_min(int a, int b, int c)
{
	int min;

	if (a < b)
	{
		if (a < c)
			min = a;
		else
			min = c;
	}
	else
	{
		if (b < c)
			min = b;
		else
			min = c;
	}
	return (min);
}

int		read_file(char *file_name)
{
	int	file;

	file = open(file_name, O_RDONLY);
	if (file != -1)
		return (file);
	else
		return (-1);
	close(file);
}
