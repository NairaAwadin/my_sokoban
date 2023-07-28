/*
** EPITECH PROJECT, 2022
** B-PSU-100-PAR-1-1-sokoban-naira.awadin
** File description:
** nb_lines_cols
*/

#include "my.h"

int get_stline(char *buffer)
{
    int n = 0;
    int count = 0;
    while (buffer[n] != '\0') {
        if (buffer[n] == '\n')
            count++;
        n++;
    }
    return count;
}

int nb_column(char *buffer)
{
    int i = 0;
    int x = 0;

    for (; buffer[x] != '\n'; x++);
    x = x + 1;
    while (buffer[x] != '\n') {
        x++;
        i++;
    }
    return (i);
}
