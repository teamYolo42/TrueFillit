/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_pos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 11:57:35 by pcartau           #+#    #+#             */
/*   Updated: 2017/12/02 14:19:41 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

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
