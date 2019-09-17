/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 07:43:55 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/17 12:41:53 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (*src != '\0')
	{
		src++;
		i++;
	}
	j = size;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && --j < 0 && size > 0)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (i);
}
