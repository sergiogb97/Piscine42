/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 18:20:05 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/22 18:43:22 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fct.h"

int		length(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	part_str(char *str, char **div, int n, int pos)
{
	int	size;

	size = length(str) - 1;
	*div = malloc(sizeof(char) * (n + 1));
	copy_str(*div, &str[size - pos], n);
	if (n == 2)
	{
		if (div[0][0] != '1')
			div[0][1] = '0';
	}
}

char	*copy_str(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	read_file(char *str)
{
	int		file;

	file = open("numbers.dict", O_RDONLY);
	if (file != -1)
		find_key(file, str);
	else
		write(1, "Dict error\n", 11);
	close(file);
}
