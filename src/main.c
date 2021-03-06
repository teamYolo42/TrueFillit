/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 13:13:41 by ebertin           #+#    #+#             */
/*   Updated: 2017/12/04 12:25:07 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static void	print_error(void)
{
	ft_putendl("error");
}

static int	ft_fillit(char *map)
{
	char	**smap;
	int		count;

	if (check_valid_file(map))
	{
		count = count_tetri(map);
		smap = fill_tab(map);
		if (count <= 26)
		{
			up_left(smap, count);
			ft_replace_char_all(smap);
			if (solve(count, smap, min_size(count)))
				return (1);
		}
	}
	return (0);
}

int			main(int ac, char **av)
{
	char	*map;
	int		fd;

	if (ac != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (1);
	}
	if ((fd = ft_open(av[1])) == 0)
	{
		ft_putendl("error");
		return (1);
	}
	map = ft_read(fd);
	if (ft_fillit(map))
		return (0);
	print_error();
	return (0);
}
