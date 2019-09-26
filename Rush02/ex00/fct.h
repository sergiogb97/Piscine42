/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fct.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 18:14:23 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/22 19:59:39 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FCT_H
# define FCT_H
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

void	take_value(char *str);
void	part_str(char *str, char **div, int n, int pos);
void	find_key(int file, char *str);
void	read_file(char *str);
char	*set_mil(int n);
char	*copy_str(char *dest, char *src, unsigned int n);
int		length(char *str);
int		valide_arg(char *argv);
int		hundreds(char *str, int size, int pos);
int		tens(char *str, int size, int pos);
int		units(char *str, int pos);
int		check_mil(char *str, int size, int pos, int mil);
#endif
