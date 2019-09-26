/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 09:39:23 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/26 17:00:05 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		length(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*pt;
	int		len;
	int		i;

	len = length(src);
	pt = malloc(sizeof(char) * len);
	i = 0;
	while (i < len)
	{
		pt[i] = src[i];
		i++;
	}
	pt[i] = '\0';
	return (pt);
}
