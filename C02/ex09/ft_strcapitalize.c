/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:17:06 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/25 04:56:37 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		alphanum(char c)
{
	if ((47 < c && c < 58) || (64 < c && c < 91) || (96 < c && c < 123))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	if (96 < *str && *str < 123)
		*str -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (64 < str[i] && str[i] < 91)
			str[i] += 32;
		if (!alphanum(str[i - 1]) && (96 < str[i] && str[i] < 123))
			str[i] -= 32;
		i++;
	}
	return (str);
}
