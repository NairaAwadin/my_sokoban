/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include "my.h"

void display_final_map(char **buf, my_map_t *map, char **av)
{
    char **new_buf = new_map(av[1], map);
    initscr();
    noecho();
    curs_set(0);
    get_pos_p(buf, map);
    while (map->click != 32) {
        for (int i = 0; buf[i] != NULL; i++) {
            mvprintw(i, 20, buf[i]);
            display_o(buf, new_buf);
        }
        refresh();
        move_p(buf, map);
    }
    endwin();
}

int main(int ac, char **av)
{
    if (ac != 2)
        return 84;
    instructions(ac, av);
    int fd = open(av[1], O_RDONLY);
    if (fd == -1)
        return 84;

    char *buffer = open_map(av[1]);
    if (my_strlen(buffer) == 0)
        return 84;

    my_map_t *map = malloc (sizeof(my_map_t));
    char **buf = display_map(av[1], map);
    display_final_map(buf, map, av);
    return 0;
}
