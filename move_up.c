/*
** EPITECH PROJECT, 2022
** move_up.c
** File description:
** move_up.c
*/

#include "my.h"

int end_function_up(char **buf, my_map_t *map)
{
    if (buf[map->x - 2][map->y] != '#' &&
        buf[map->x - 2][map->y] != 'X') {
        buf[map->x][map->y] = ' ';
        buf[map->x - 1][map->y] = 'P';
        buf[map->x - 2][map->y] = 'X';
    } else {
        return -1;
    }
    return 0;
}

int move_up(char **buf, my_map_t *map)
{
    int do_it = 0;
    if (buf[map->x - 1][map->y] != '#' && map->x != 0) {
        if (buf[map->x - 1][map->y] == 'X') {
            do_it = end_function_up(buf, map);
        }
        if (do_it != -1) {
            buf[map->x][map->y] = ' ';
            buf[map->x - 1][map->y] = 'P';
        }
    }
    get_pos_p(buf, map);
}
