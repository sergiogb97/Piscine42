/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 03:47:29 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/25 03:47:32 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	print_matrix(int *tab, int columns, char *values)
{
	int i;
	int	max;

	i = 0;
	max = 0;
	while (tab[i] != -1)
	{
		if (tab[i] > tab[max])
			max = i;
		i++;
	}
	i = -1;
	while (tab[++i] != -1)
	{
		if (i % columns == 0 && i != 0)
			write(1, "\n", 1);
		if (!check_position(tab, i, columns, max))
			write(1, &values[2], 1);
		else if (tab[i] == 0)
			write(1, &values[1], 1);
		else
			write(1, &values[0], 1);
	}
	write(1, "\n", 1);
}

int		check_position(int *tab, int pos, int columns, int max)
{
	int	corner1;
	int mod1;
	int mod2;
	int	modpos;

	corner1 = ((max - ((columns * (tab[max] - 1)))) - (tab[max] - 1));
	mod1 = corner1 % columns;
	mod2 = max % columns;
	modpos = pos % columns;
	if (corner1 <= pos && (mod1 <= modpos && modpos <= mod2) && pos <= max)
		return (0);
	return (1);
}

int		*logic_matrix(int *tab, int columns)
{
	int	min;
	int	i;
	int	tmp;

	i = 0;
	while (tab[i] != -1)
	{
		if (tab[i] != 0)
		{
			if (i < columns || i % columns == 0)
			{
				tab[i] = 1;
			}
			else
			{
				tmp = i - columns;
				min = get_min(tab[tmp], tab[tmp - 1], tab[i - 1]);
				tab[i] = min + 1;
			}
		}
		i++;
	}
	return (tab);
}

int		*get_matrix(char *file_name, int rows, int columns, char obstacle)
{
	int		file;
	int		*tab;
	char	buf;
	int		pos;

	file = read_file(file_name);
	tab = (int *)malloc(sizeof(int) * (rows * columns));
	read(file, &buf, 1);
	while (buf != '\n')
		read(file, &buf, 1);
	read(file, &buf, (pos = 0) + 1);
	while (pos < (rows * columns))
	{
		if (buf != '\n')
		{
			if (buf == obstacle)
				tab[pos] = 0;
			else
				tab[pos] = 1;
			pos++;
		}
		read(file, &buf, 1);
	}
	tab[pos] = -1;
	return (tab);
}

void	program(char *file_name)
{
	int		file;
	int		columns;
	int		rows;
	int		*tab;
	char	*values;

	file = read_file(file_name);
	if (file != -1)
	{
		values = get_values(file_name);
		rows = get_rows(file_name);
		columns = get_columns(file_name);
		tab = get_matrix(file_name, rows, columns, values[1]);
		tab = logic_matrix(tab, columns);
		print_matrix(tab, columns, values);
		free(tab);
		free(values);
	}
	else
		write(1, "Map error\n", 10);
}
