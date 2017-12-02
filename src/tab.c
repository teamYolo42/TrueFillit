/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandolo <asandolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 14:06:15 by asandolo          #+#    #+#             */
/*   Updated: 2017/12/02 13:33:29 by ebertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void    ft_puttab(char **map)
{
    int        x;

    x = 0;
    while (map[x])
        ft_putendl(map[x++]);
	//ft_putchar('C');
}

char	**fill_tab(char *map)
{
	size_t	i;
	size_t	j;
	char	**smap;
	char	**ret;

	j = 0;
	i = 0;
	if (!(ret = malloc(sizeof(map))))
		return (NULL);
	smap = ft_strsplit(map, '\n');
	while (smap[j])
	{
		//ft_putendl(smap[j]);
		ret[i] = ft_strjoin(smap[j], smap[j + 1]);
		ret[i] = ft_strjoin(ret[i], smap[j + 2]);
		ret[i] = ft_strjoin(ret[i], smap[j + 3]);
		//ft_putendl(ret[i]);
		i++;
		j += 4;
	}
	ret[i][0] = '\0';
	ft_puttab(ret);
	return (ret);
}
