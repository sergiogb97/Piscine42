/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 09:37:23 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/17 14:43:03 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		spaces(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
		c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int		valide(char c)
{
	if ((c == '-' || c == '+' || (47 < c && c < 58)))
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int n;
	int atoi;
	int pos;

	atoi = 0;
	pos = 1;
	while (*str != '\0' && (spaces(*str) || valide(*str)))
	{
		if (*str == '-')
			n++;
		str++;
	}
	str--;
	while (47 < *str && *str < 58)
	{
		atoi = atoi + ((*str - 48) * pos);
		pos = pos * 10;
		str--;
	}
	if (n % 2)
		atoi = -atoi;
	return (atoi);
}
