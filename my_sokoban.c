/*
** EPITECH PROJECT, 2022
** my_sokoban.c
** File description:
** my_sokoban.c
*/

#include "my.h"

char *open_map(const char *filepath)
{
    struct stat buf;
    stat(filepath, &buf);
    int size = buf.st_size;
    char *buffer = malloc(sizeof(char) * (size + 1));
    int fd = open(filepath, O_RDONLY);
    int i = read(fd, buffer, size);
    buffer[size] = '\0';
    close(fd);
    return buffer;
}

char **display_map(const char *filepath, my_map_t *map)
{
    char *buffer = open_map(filepath);
    int size_l = get_stline(buffer); int size_c = nb_column(buffer);
    char **buf = malloc(sizeof(char*) * (size_l));
    for (int i = 0; i < size_l; i++) {
        buf[i] = malloc(sizeof(char) * (size_c));
    }
    int x = 0;
    int y = 0;
    for (int v = 0; buffer[v] != '\0'; v++) {
        if (buffer[v] == '\n') {
            buf[x][y] = '\0';
            x = x + 1;
            y = 0;
        } else {
            buf[x][y] = buffer[v];
            y++;
        }
    }
    buf[size_l] = NULL;
    return buf;
}

char **move_p(char **buf, my_map_t *map)
{
    keypad(stdscr, TRUE);
    map->click = getch();
    if (map->click == KEY_UP)
        move_up(buf, map);
    if (map->click == KEY_DOWN)
        move_down(buf, map);
    if (map->click == KEY_LEFT)
        move_left(buf, map);
    if (map->click == KEY_RIGHT)
        move_right(buf, map);
    return buf;
}
