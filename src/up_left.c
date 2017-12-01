#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "../includes/fillit.h"

void    ft_puttab(char **map)
{
	int    x;

	x = 0;
	while (x < 4)
	{
		printf("%s\n", map[x]);
		x++;
	}
}

int        check_up(char **map)
{
	int y;

	y = 0;
	while (y < 4)
	{
		if (map[0][y] == '#')
			return (0);
		y++;
	}
	return (1);
}

int        check_left(char **map)
{
	int x;

	x = 0;
	while (x < 4)
	{
		if (map[x][0] == '#')
		return (0);
		x++;
	}
	return (1);
}

void    up(char **map, int y)
{
	int temp;
	int x;

	temp = y + 4;
	if (!(check_up(map)))
		return ;
	while (y < temp)
	{
		x = 0;
		while (x < 4)
		{
			if (map[x][y] != '.' && map[x - 1][y] == '.' && x > 0)
			{
				map[x][y] = '#';
				map[x - 1][y] = '.';
			}
			x++;
		}
		y++;
	}
}

void    left(char **map, int x)
{
	int temp;
	int y;

	temp = x + 4;
	if (!(check_left(map)))
		return ;
	while (x < temp)
	{
		y = 0;
		while (y < 4)
		{
			if (map[x][y] != '.' && map[x][y - 1] == '.' && y > 0)
			{
				map[x][y] = '#';
				map[x][y - 1] = '.';
			}
			y++;
		}
		x++;
	}
}

void    up_left(char **map, int count)
{
	int i;

	i = 0;
	while (i < count)
	{
		left(map, i * 4);
		i++;
	}
	i = 0;
	while (i < count)
	{
		up(map, i * 4);
		i++;
	}
}

int main(int argc, char *argv[])
{
	char *map[4];

	map[0] = ft_strdup("....");
	map[1] = ft_strdup("....");
	map[2] = ft_strdup("..##");
	map[3] = ft_strdup("..##");

	up_left(map, 1);

	ft_puttab(map);
	return 0;
}
