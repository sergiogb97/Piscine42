/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 07:43:55 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/25 06:21:19 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	j = ft_strlen(dest);
	len = j + size;
	i = 0;
	while (src[i] != '\0' && ++j < (len))
	{
		dest[i] = src[i];
		i++;
	}
	if (j < (j + size))
		dest[i] = '\0';
	else if (size > 0)
		dest[--i] = '\0';
	return (ft_strlen(src));
}
