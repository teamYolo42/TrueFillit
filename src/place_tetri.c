/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_tetri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <pcartau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 15:29:32 by pcartau           #+#    #+#             */
/*   Updated: 2017/12/02 18:00:05 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char	*place_tetri(int cursor, int size, char *tetri, char *map)
{
	int temp_cursor;
	int temp_i;
	int x;
	int i;

	i = 0;
	x = 0;
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
