/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 12:36:53 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/26 21:03:04 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		length(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i - 1);
}

void	ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;
	int		leng;

	leng = 0;
	i = 0;
	while (i < size)
		leng += length(strs[i++]);
	leng += ((size - 1) * length(sep));
	tab = malloc(sizeof(char) * leng);
	tab[0] = '\0';
	if (size == 0)
		return (tab = NULL);
	else
	{
		i = 0;
		while (i < size)
		{
			ft_strcat(tab, strs[i]);
			if (i++ != (size - 1))
				ft_strcat(tab, sep);
		}
	}
	return (tab);
}
