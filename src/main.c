/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 13:13:41 by ebertin           #+#    #+#             */
/*   Updated: 2017/12/01 13:25:06 by asandolo         ###   ########.fr       */
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
		ft_putstr("usage: fillit input_file\n");
		return (0);
	}
	if (check_valid_file(av[1]))
	{
		count = count_tetri(av[1]);
		tab = fill_tab(count, av[1]);
		if (check_valid_tetri_nb_diez(tab, count) && count <= 26)
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
