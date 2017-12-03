/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_pos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 11:57:35 by pcartau           #+#    #+#             */
/*   Updated: 2017/12/03 13:47:21 by vgauther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

t_variable	checker(t_variable var, int cursor)
{
	while (cursor != var.temp_cursor || var.i != var.temp_i)
	{
		if (cursor != var.temp_cursor)
			cursor++;
		if (var.i != var.temp_i)
			var.i++;
	}
	return (var);
}

int			check_valid_pos(int curs, int size, char *tetri, char *map)
{
	t_variable var;

	var.i = 0;
	var.nbdiez = 0;
	var.cursor = curs;
	var.temp_cursor = init_temp(var.cursor, size);
	var.temp_i = 3;
	while (tetri[var.i] && map[var.cursor])
	{
		while (var.i != var.temp_i && var.cursor != var.temp_cursor)
		{
			if (tetri[var.i] != '.' && map[var.cursor] == '.')
				var.nbdiez++;
			var.i++;
			var.cursor++;
		}
		if (tetri[var.i] != '.' && map[var.cursor] == '.')
			var.nbdiez++;
		var = checker(var, var.cursor);
		var.temp_cursor += size;
		var.temp_i += 4;
		var.i++;
		var.cursor++;
	}
	return ((var.nbdiez == 4) ? 1 : 0);
}
