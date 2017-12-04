/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_or.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgauther <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 11:26:28 by vgauther          #+#    #+#             */
/*   Updated: 2017/12/04 11:26:30 by vgauther         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		ft_open(char *name)
{
	int		fd;
	char	*error;

	error = ft_strjoin("open() error ", name);
	fd = open(name, O_RDONLY);
	if (fd == -1)
	{
		ft_putendl(error);
		return (0);
	}
	return (fd);
}

char	*ft_read(int fd)
{
	char	*buf;
	int		g;

	if (!(buf = malloc(sizeof(char *) * 4096 + 1)))
		return (NULL);
	g = (int)read(fd, buf, 4096);
	buf[g] = '\0';
	return (buf);
}
