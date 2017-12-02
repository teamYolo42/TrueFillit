/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebertin <ebertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 13:34:14 by ebertin           #+#    #+#             */
/*   Updated: 2017/12/02 14:56:33 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

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
