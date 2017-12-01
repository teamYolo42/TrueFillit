/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asandolo <asandolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 14:06:15 by asandolo          #+#    #+#             */
/*   Updated: 2017/12/01 14:10:07 by asandolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char	**fill_tab(char *map)
{
	size_t	i;
	char	**smap;

	i = 0;
	if (!(smap = malloc(sizeof(map) + 1)))
		return (NULL);
	smap = ft_strsplit(map, '\n');
	return (smap);
}
