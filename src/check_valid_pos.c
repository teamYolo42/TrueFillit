/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_pos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 11:57:35 by pcartau           #+#    #+#             */
/*   Updated: 2017/12/02 17:25:59 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "includes/fillit.h"
#include <stdio.h>
#include <string.h>

int		check_valid_pos(int cursor, int size, char *tetri, char *map)
{
	int temp_cursor;
	int temp_i;
	int x;
	int i;

	i = 0;
	x = 0;
	temp_cursor = ;
	temp_i = 4;
	while (tetri[i] && map[cursor])
	{
		while (i != temp_i && cursor != temp_cursor)
		{
			if (tetri[i] != '.' && map[cursor] == '.')
				x++;
			i++;
			cursor++;
		}
		if (cursor++ == temp_cursor)
			temp_cursor = cursor + size;
		else if (i++ == temp_i)
			temp_i = i + 4;
	}
	return ((x == 4) ? 1 : 0);
}

int main(void)
{
	printf("%d\n", check_valid_pos(11, 4, strdup("AAAA............"), strdup("................")));
	return 0;
}
