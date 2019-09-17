/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 07:20:37 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/12 09:40:33 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int		i;
	char	c;
	int		check;

	check = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c < 'A' || (c > 'Z' && c < 'a') || 'z' < c)
			check = 0;
		i++;
	}
	return (check);
}