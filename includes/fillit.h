/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 13:17:30 by ebertin           #+#    #+#             */
/*   Updated: 2017/12/03 13:48:27 by vgauther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include <stdio.h>
# include <string.h>

typedef struct		s_var_struct_vp
{
	int i;
	int temp_cursor;
	int temp_i;
	int nbdiez;
	int cursor;
}					t_variable;

typedef struct		s_var_struct_try
{
	int		count;
	char	*map;
}					t_var_struct_try;

int					ft_open(char *name);
char				*ft_read(int fd);
int					count_tetri(char *map);
int					check_vali(char *map);
char				**fill_tab(char *map);
char				**init_tetritype(void);
int					check_valid_tetri(char **tab, int nb, char **tetritype);
int					check_valid_tetri_nb_diez(char **tab, int count);
void				ft_replace_char(char *s, char a, char b);
void				up_left(char **tab, int count);
void				ft_replace_char_all(char **tab);
char				*place_tetri(int pos, int taille_map, char *tetri,
					char *map);
int					min_size(int n);
int					solve(int count, char **tab, int size);
int					check_valid_file(char *str);
int					check_valid_pos(int curs, int size, char *tetri, char *map);
int					init_temp(int cursor, int size);
t_variable			checker(t_variable var, int cursor);

#endif
