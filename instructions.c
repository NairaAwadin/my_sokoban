/*
** EPITECH PROJECT, 2022
** instructions.c
** File description:
** instructions.c
*/

#include "my.h"

int instructions(int ac, char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h') {
        my_putstr("USAGE\n");
        my_putstr("     ./my_sokoban map\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("     map  file representing the warehouse map, ");
        my_putstr("containing '#' for walls,\n");
        my_putstr("          'P' for the player, 'X' for boxes and 'O' ");
        my_putstr("for storage locations.\n");
        exit (0);
    }
}
