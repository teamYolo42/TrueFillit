/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_tetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 15:29:32 by pcartau           #+#    #+#             */
/*   Updated: 2017/12/02 17:25:58 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "../includes/fillit.h"
#include <stdio.h>
#include <string.h>

char	*place_tetri(int cursor, int size, char *tetri, char *map)
{
	int temp_cursor;
	int temp_i;
	int x;
	int i;

	i = 0;
	x = 0;
	temp = ;
	temp_i = 4;
	while (tetri[i] && map[cursor])
	{
		while (tetri[i] != '\n' && map[cursor] != '\n')
		{
			if (tetri[i] != '.' && map[cursor] == '.')
				map[cursor] = tetri[i];
			i++;
			cursor++;
		}
		if (cursor++ == temp_cursor)
			temp_cursor = cursor + size;
		else if (i == 4)
			i++;
	}
	return (map);
}

int main(void)
{
	printf("%s\n", place_tetri(3, 5, strdup("AAAA............"), strdup("BB..BB..........")));
	return 0;
}
