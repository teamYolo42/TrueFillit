/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replacetag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandolo <asandolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 16:20:14 by asandolo          #+#    #+#             */
/*   Updated: 2017/12/03 14:09:19 by asandolo         ###   ########.fr       */
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
	char	c;

	i = 0;
	c = 'A';
	while (map[i])
	{
		ft_replace_char(map[i], '#', c);
		i++;
		c++;
	}
}
