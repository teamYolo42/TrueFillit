/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_pos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 11:57:35 by pcartau           #+#    #+#             */
/*   Updated: 2017/12/03 11:25:56 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
#include <stdio.h>
#include <string.h>

variable	checker(variable var, int cursor)
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

int init_temp(int cursor, int size)
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

int		check_valid_pos(int curs, int size, char *tetri, char *map)
{
	variable var;

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

int main(void)
{
	printf("%d\n", check_valid_pos(0, 4, strdup("AAAA............"), strdup("................")));
	return 0;
}
