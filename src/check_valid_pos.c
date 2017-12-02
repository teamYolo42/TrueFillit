/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid_pos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <pcartau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 11:57:35 by pcartau           #+#    #+#             */
<<<<<<< Updated upstream
/*   Updated: 2017/12/02 18:02:33 by ebertin          ###   ########.fr       */
=======
/*   Updated: 2017/12/02 18:01:34 by asandolo         ###   ########.fr       */
>>>>>>> Stashed changes
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"
<<<<<<< Updated upstream
#include <stdio.h>
#include <string.h>
=======
>>>>>>> Stashed changes

int		check_valid_pos(int cursor, int size, char *tetri, char *map)
{
	int temp_cursor;
	int temp_i;
	int x;
	int i;

	i = 0;
	x = 0;
	temp_cursor = 0;
	temp_i = 4;
	while (tetri[i] && map[cursor])
	{
		while (i != temp_i && cursor != temp_cursor)
		{
			if (tetri[i] != '.' && map[cursor] == '.')
				x++;
			i++;
			cursor++;
		}
		if (cursor++ == temp_cursor)
			temp_cursor = cursor + size;
		else if (i++ == temp_i)
			temp_i = i + 4;
	}
	return ((x == 4) ? 1 : 0);
}
<<<<<<< Updated upstream

int main(void)
{
	printf("%d\n", check_valid_pos(11, 4, strdup("AAAA............"), strdup("................")));
	return 0;
}


///////////////////

int			check_valid_possub(int pos, int taille_map, char *tetri, char *map)
{
	t_var_struct_vp var;

	var.nbdiez = 0;
	var.linmap = 1;
	var.i = 0;
	var.savepos = pos;
	var.linmapa = var.linmap;
	//temps que i < 16
	while (var.i < 16)
	{
		//si la position est superieur a la taille de la map, alors c'est faux et on return 0
		if (pos > (taille_map * taille_map))
			return (0);
		//Si la valeur de la position est = a un '.' et que la valeu de la position sur i est un '#'
		if ((map[pos] == '.' && tetri[var.i] != '.'))
			//on incremente nbdiez et on check si on a bien atteint les 4 # (On incremente car on sait qu'on
			//peut placier un '#' correctement)
			if (++(var.nbdiez) == 4)
				return (1);
		// On passe a la valeur suivante dans le tetriminos
		var.i++;
		//Si la position de pos (incremente ici pour gagner de la place) % taille map n'est pas egale a 0 (Pk ?)
		//et que la valeur du tetri est un '#' et que la valeur du tetri % 4 n'est pas 0 (Pk ?) on return 0
		if (!(++pos % taille_map) && (tetri[var.i] != '.' && (var.i % 4)))
			return (0);
		//on sauvegarde la ligne ou on est
		var.linmapa = var.linmap;
		//Si la valeur de tetri % 4 n'est pas egale a 0 (Pk ?)
		if (!(var.i % 4))
		{
			// la position devient la valeur de l'ancienne position + la taille de la map * la ligne
			pos = var.savepos + (taille_map * var.linmap);
			//on passe a la ligne suivante
			var.linmap++;
		}
	}
	return (0);
}
=======
>>>>>>> Stashed changes
