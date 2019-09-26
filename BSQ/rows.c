/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rows.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 02:36:01 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/25 02:36:03 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		ft_atoi(char *num)
{
	int atoi;
	int	i;
	int v;

	i = 0;
	while (num[i] != '\0')
		i++;
	i--;
	v = 1;
	while (i > -1)
	{
		atoi = atoi + ((num[i] - 48) * v);
		v *= 10;
		i--;
	}
	return (atoi);
}

int		get_rows(char *file_name)
{
	int		file;
	int		i;
	int		rows;
	char	*num;
	char	buf;

	num = malloc(sizeof(int));
	file = open(file_name, O_RDONLY);
	read(file, &buf, 1);
	i = 0;
	while (47 < buf && buf < 58)
	{
		num[i] = buf;
		read(file, &buf, 1);
		i++;
	}
	num[i] = '\0';
	rows = ft_atoi(num);
	free(num);
	return (rows);
}
