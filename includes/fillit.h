/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 13:17:30 by ebertin           #+#    #+#             */
/*   Updated: 2017/12/01 13:24:35 by ebertin          ###   ########.fr       */
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

typedef struct		s_var_struct_vp
{
	int i;
	int savepos;
	int linmap;
	int linmapa;
	int nbdiez;
}					t_var_struct_vp;
typedef struct		s_var_struct_try
{
	int		count;
	char	*map;
}					t_var_struct_try;

int					count_tetri(char *map);
int					check_valid_file(const char *filename);
char				**fill_tab(int count, char *filename);
char				**init_tetritype(void);
int					check_valid_tetri(char **tab, int nb, char **tetritype);
int					check_valid_tetri_nb_diez(char **tab, int count);
void				ft_replace_char(char *s, char a, char b);
void				up_left(char **tab, int count);
void				ft_replace_char_all(char **tab, int count);
char				*place_tetri(int pos, int taille_map, char *tetri,
					char *map);
int					check_valid_pos(int pos, int taille_map, char *tetri,
					char *map);
int					min_size(int n);
int					solve(int count, char **tab, int size);
#endif
