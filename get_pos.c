/*
** EPITECH PROJECT, 2022
** get_pos.c
** File description:
** get_pos
*/

#include "my.h"

void get_pos(int j, char **buf, my_map_t *map)
{
    for (int i = 0; buf[j][i] != '\0'; i++) {
        if (buf[j][i] == 'P') {
            map->x = j;
            map->y = i;
        }
    }
}

void get_pos_p(char **buf, my_map_t *map)
{
    int j = 0;

    for (; buf[j] != NULL; j++) {
        get_pos(j, buf, map);
    }
}
