#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "../includes/fillit.h"

void	up_line(char *str)
{
	while (!ft_strnstr(str, "#", 4))
	{
		ft_memmove(str, str + 4, 12);
		ft_memset(str + 12, '.', 4);
	}
}

void	left_col(char *str)
{
	while (str[0] != '#' && str[4] != '#' && str[8] != '#' && str[12] != '#')
	{
		ft_memmove(str, str + 1, 3);
		str[3] = '.';
		ft_memmove(str + 4, str + 5, 3);
		str[7] = '.';
		ft_memmove(str + 8, str + 9, 3);
		str[11] = '.';
		ft_memmove(str + 12, str + 13, 3);
		str[15] = '.';
	}
}

void	up_left(char **tab, int count)
{
	int i;

	i = 0;
	while (i < count)
	{
		up_line(tab[i]);
		left_col(tab[i++]);
	}
}

int main(int ac, char **av)
{
	int fd;
	char *map;
	char **smap;
	int	x;

	if ((fd = ft_open(av[1])) == -1)
	{
		ft_putendl("error");
		return (1);
	}
	map = ft_read(fd);
	smap = fill_tab(map);
	up_left(smap, 4);
	x = 0;
	while (smap[x])
		ft_putendl(smap[x++]);
	return 0;
}
