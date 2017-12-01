#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "../includes/fillit.h"

void	up_line(char *str)
{
	//temps que aucun des caracteres de la prmiere ligne est un #, on continue
	while (!ft_strnstr(str, "#", 4))
	{
		//decale les caracteres de la ligne vers la ligne au dessus
		//str est la destination, str + 4 est l'adresse du prmier caractere de la ligne suivante, 12 c'est le nombre de caracteres
		//a rehausse
		ft_memmove(str, str + 4, 12);
		//la derniere ligne est remplie de .
		ft_memset(str + 12, '.', 4);
	}
}

void	left_col(char *str)
{
	//temps que la colone de gauche ne contient pas des #, on les bouges a gauche
	while (str[0] != '#' && str[4] != '#' && str[8] != '#' && str[12] != '#')
	{
		//on decale les trois caracteres de droites de 1 vers la gauche
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

int main(int argc, char *argv[])
{
	char *map[16];

	map[0] = ft_strdup("..........##..##");
	up_left(map, 1);
	printf("%s\n", map[0]);
	return (0);
}
