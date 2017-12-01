#include "fillit.h"

char        *alloc_map(char *map, size_t size)
{
    if (map)
        free(map);
    if (!(map = (char*)malloc(sizeof(char) * (size * size + 1))))
        return (0);
    ft_memset(map, '.', size * size);
    map[size * size] = '\0';
    return (map);
}

char        *try(t_var_struct_try var, int size, char **tetris, int t)
{
    int        i;
    char    *temp;

    i = 0;
    while (i < size * size)
    {
        if (check_valid_pos(i, size, tetris[t], var.map))
        {
            var.map = place_tetri(i, size, tetris[t], var.map);
            if (t + 1 == var.count)
                return (var.map);
            temp = try(var, size, tetris, t + 1);
            if (temp)
                return (temp);
            else
                ft_replace_char(var.map, 'A' + t, '.');
        }
        i++;
    }
    return (0);
}

int            solve(int count, char **tab, int size)
{
    char                *temp;
    t_var_struct_try    var;

    var.count = count;
    while (size < 100)
    {
        var.map = NULL;
        if (!(var.map = alloc_map(var.map, size)))
            return (0);
        temp = try(var, size, tab, 0);
        if (temp)
        {
            while (*temp)
            {
                write(1, temp, size);
                temp += size;
                ft_putchar('\n');
            }
            return (1);
        }
        size++;
    }
    return (0);
}
