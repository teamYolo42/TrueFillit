/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacetag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandolo <asandolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 16:20:14 by asandolo          #+#    #+#             */
/*   Updated: 2017/12/02 15:30:03 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void			ft_replace_char(char *str, char r, char c)
{
	size_t i;

	i = 0;
	if (str)
		while (str[i])
		{
			if (str[i] == r)
				str[i] = c;
			i++;
		}
}

void			ft_replace_char_all(char **map)
{
	size_t	i;
	size_t	j;
	char	c;

	i = 0;
	c = 'A';
	while (map[i])
	{
		j = 0;
		while (j < 4)
		{
			ft_replace_char(map[i], '#', c);
			j++;
			i++;
		}
		c++;
	}
}
