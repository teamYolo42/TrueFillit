/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_tetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 15:29:32 by pcartau           #+#    #+#             */
/*   Updated: 2017/12/03 13:47:10 by vgauther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		init_temp(int cursor, int size)
{
	int i;

	while (cursor != size * size)
	{
		i = 0;
		while (i < size)
		{
			i++;
			if (cursor == ((i * size) - 1))
				return (cursor);
		}
		cursor++;
	}
	return (cursor);
}

char	*place_tetri(int curs, int size, char *tetri, char *map)
{
	t_variable var;

	var.i = 0;
	var.cursor = curs;
	var.temp_cursor = init_temp(var.cursor, size);
	var.temp_i = 3;
	while (tetri[var.i] && map[var.cursor])
	{
		while (var.i != var.temp_i && var.cursor != var.temp_cursor)
		{
			if (tetri[var.i] != '.' && map[var.cursor] == '.')
				map[var.cursor] = tetri[var.i];
			var.i++;
			var.cursor++;
		}
		if (tetri[var.i] != '.' && map[var.cursor] == '.')
			map[var.cursor] = tetri[var.i];
		var = checker(var, var.cursor);
		var.temp_cursor += size;
		var.temp_i += 4;
		var.i++;
		var.cursor++;
	}
	return (map);
}
