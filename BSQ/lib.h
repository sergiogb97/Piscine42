/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 12:52:14 by sgarcia-          #+#    #+#             */
/*   Updated: 2019/09/25 02:25:35 by sgarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

void	program(char *file_name);
void	print_matrix(int *tab, int columns, char *values);
char	*get_values(char *file_name);
int		check_position(int *tab, int pos, int columns, int max);
int		*logic_matrix(int *tab, int columns);
int		get_min(int a, int b, int c);
int		get_columns(char *file_name);
int		*get_matrix(char *file_name, int rows, int columns, char obstacle);
int		get_rows(char *file_name);
int		read_file(char *file_name);
int		ft_atoi(char *num);

#endif
