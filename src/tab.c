/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandolo <asandolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 14:06:15 by asandolo          #+#    #+#             */
/*   Updated: 2017/12/02 12:40:26 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char	**fill_tab(char *map)
{
	size_t	i;
	size_t	j;
	char	**smap;
	char	**ret;

	j = 0;
	i = 0;
	if (!(ret = malloc(sizeof(map) * 4)))
		return (NULL);
	smap = ft_strsplit(map, '\n');
	while (smap[j])
	{
		ret[i] = ft_strjoin(smap[j], smap[j + 1]);
		ret[i] = ft_strjoin(ret[i], smap[j + 2]);
		ret[i] = ft_strjoin(ret[i], smap[j + 3]);
		i++;
		j += 4;
	}
	return (ret);
}
