/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 07:31:40 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/17 14:03:31 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;

	i = 0;
	while (*(dest + i) != '\0')
		i++;
	j = 0;
	while (*dest != '\0' && size != 0)
	{
		dest++;
		j++;
	}
	while (*src != '\0' && --size > 1)
		*dest++ = *src++;
	if (size == 1)
		*dest = '\0';
	return (i + j);
}
