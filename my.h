/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

    #include <unistd.h>
    #include <fcntl.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <sys/stat.h>
    #include <curses.h>
    #include <ncurses.h>

typedef struct my_map_s {
    int x;
    int y;
    int click;
}my_map_t;

void  my_putchar(char c);
int my_putstr(char const *src);
int my_strlen(char const *str);
char *open_map(char const *filepath);
char **display_map(const char *filepath, my_map_t *map);
int get_stline(char *buffer);
int nb_column(char *buffer);

void get_pos_p(char **buf, my_map_t *map);
void get_pos(int j, char **buf, my_map_t *map);

char **move_p(char **buf, my_map_t *map);

int move_up(char **buf, my_map_t *map);
int end_function_up(char **buf, my_map_t *map);

int move_down(char **buf, my_map_t *map);
int end_function_down(char **buf, my_map_t *map);

int move_left(char **buf, my_map_t *map);
int end_function_left(char **buf, my_map_t *map);

int move_right(char **buf, my_map_t *map);
int end_function_right(char **buf, my_map_t *map);

int instructions(int ac, char **av);

void display_final_map(char **buf, my_map_t *map, char **av);

char **new_map(const char *filepath, my_map_t *map);
void display_o(char **buf, char **new_buf);
void display (int i, char **buf, char **new_buf);

#endif
