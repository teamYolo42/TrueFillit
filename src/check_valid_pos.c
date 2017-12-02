/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_pos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandolo <asandolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 15:03:41 by asandolo          #+#    #+#             */
/*   Updated: 2017/12/02 15:05:25 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		check_valid_pos(int cursor, char *tetri, char *map)
{
	int x;
	int i;

	i = 0;
	x = 0;
	while (tetri[i] && map[cursor])
	{
		while (tetri[i] != '\n' && map[cursor] != '\n')
		{
			if (tetri[i] != '.' && map[cursor] == '.')
				x++;
			i++;
			cursor++;
		}
		if (map[cursor] == '\n')
			cursor++;
		else if (tetri[i] == '\n')
			i++;
	}
	return ((x == 4) ? 1 : 0);
}
