/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgauther <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/03 13:39:02 by vgauther          #+#    #+#             */
/*   Updated: 2017/12/03 13:47:59 by vgauther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		test_de_vic(int cursor, int size)
{
	int		tmp;
	int		i;

	i = 1;
	while (cursor > i * size)
		i++;
	tmp = i * size;
	return (tmp);
}
