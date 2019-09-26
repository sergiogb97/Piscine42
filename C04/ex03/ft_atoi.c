/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 09:37:23 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/19 10:38:09 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		spaces(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' ||
		c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int		sign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int		num(char c)
{
	if (47 < c && c < 58)
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int atoi;
	int pos;
	int n;
	int v;

	pos = 0;
	while (str[pos] != '\0' && spaces(str[pos]))
		pos++;
	n = 0;
	while (str[pos] != '\0' && sign(str[pos]))
		if (str[pos++] == '-')
			n++;
	while (str[pos] != '\0' && num(str[pos]))
		pos++;
	pos--;
	atoi = 0;
	v = 1;
	while (str[pos] && num(str[pos]))
	{
		atoi = atoi + ((str[pos--] - 48) * v);
		v *= 10;
	}
	if (n % 2)
		atoi = -atoi;
	return (atoi);
}
