/*
** EPITECH PROJECT, 2023
** display o
** File description:
** display
*/

#include "my.h"

char **new_map(const char *filepath, my_map_t *map)
{
    char *buffer = open_map(filepath);
    int size_l = get_stline(buffer); int size_c = nb_column(buffer);
    char **new_buf = malloc(sizeof(char*) * (size_l));
    for (int i = 0; i < size_l; i++) {
        new_buf[i] = malloc(sizeof(char) * (size_c));
    }
    int x = 0;
    int y = 0;
    for (int v = 0; buffer[v] != '\0'; v++) {
        if (buffer[v] == '\n') {
            new_buf[x][y] = '\0';
            x = x + 1;
            y = 0;
        } else {
            new_buf[x][y] = buffer[v];
            y++;
        }
    }
    new_buf[size_l] = NULL;
    return new_buf;
}

void display(int i, char **buf, char **new_buf)
{
    for (int j = 0; buf[i][j] != '\0'; j++) {
        if (buf[i][j] == ' ' && new_buf[i][j] == 'O')
            buf[i][j] = 'O';
    }
}

void display_o(char **buf,  char **new_buf)
{
    int i = 0;

    for (; buf[i] != NULL; i++) {
        display(i, buf, new_buf);
    }
}


/*void get_pos_o(char **buf, pos_o *pso)
  {
  for (int i = 0; buf[i] != NULL; i++) {
  for (int j = 0; buf[i][j] != '\0'; j++) {
  if (buf[i][j] == 'O') {
  pso->o_x = i;
  pso->o_y = j;
  printf("x = %d\n", pso->o_x);
  printf("y = %d\n", pso->o_y);
  }
  }
  }
  }*/
