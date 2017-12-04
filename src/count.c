/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 13:34:14 by ebertin           #+#    #+#             */
/*   Updated: 2017/12/03 17:56:04 by vgauther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

/*
** fonction contant le nombre de tetriminos qui nous sont envoyes
*/

int	count_tetri(char *map)
{
	int count;
	int i;
	int k;

	count = 1;
	i = 0;
	k = 0;
	while (map[i])
	{
		if (k == 20)
		{
			k = 0;
			count++;
			i++;
		}
		k++;
		i++;
	}
	return (count);
}
