/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 13:13:41 by ebertin           #+#    #+#             */
/*   Updated: 2017/12/01 14:04:04 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static void		print_error(void)
{
	ft_putstr("error\n");
}

int				main(int ac, char **av)
{
	char	**tab;
	int		count;

	if (ac != 2)
	{
		count = count_tetri(map);
		smap = fill_tab(map);
		if (check_valid_tetri_nb_diez(smap, count) && count <= 26)
		{
			up_left(tab, count);
			if (check_valid_tetri(tab, count, init_tetritype()))
			{
				ft_replace_char_all(tab, count);
				if (solve(count, tab, min_size(count)))
					return (0);
			}
		}
	}
	print_error();
}
