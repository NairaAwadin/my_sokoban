##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC	=	my_putchar.c	\
		my_putstr.c	\
		my_strlen.c	\
		my_sokoban.c	\
		nb_lines_cols.c	\
		get_pos.c	\
		move_up.c	\
		move_down.c	\
		move_left.c	\
		move_right.c	\
		instructions.c	\
		display_o.c	\
		main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -lncurses -o $(NAME) $(CFLAGS) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	-rm -f $(NAME)

re:	fclean all
