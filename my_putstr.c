
/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** my_putstr.c
*/

#include "my.h"

int my_putstr(char const *src)
{
    int i = 0;
    while (src[i] != '\0') {
        my_putchar(src[i]);
        i++;
    }
    return (0);
}
