/*
** EPITECH PROJECT, 2022
** move_right.c
** File description:
** move_right.c
*/

#include "my.h"

int end_function_right(char **buf, my_map_t *map)
{
    if (buf[map->x][map->y + 2] != '#' &&
        buf[map->x][map->y + 2] != 'X') {
        buf[map->x][map->y] = ' ';
        buf[map->x][map->y + 1] = 'P';
        buf[map->x][map->y + 2] = 'X';
    } else {
        return -1;
    }
    return 0;
}

int move_right(char **buf, my_map_t *map)
{
    int do_it = 0;
    if (buf[map->x][map->y + 1] != '#' && map->x != 0) {
        if (buf[map->x][map->y + 1] == 'X') {
            do_it = end_function_right(buf, map);
        }
        if (do_it != -1) {
            buf[map->x][map->y] = ' ';
            buf[map->x][map->y + 1] = 'P';
        }
    }
    get_pos_p(buf, map);
}
