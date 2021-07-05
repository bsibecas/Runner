##
## EPITECH PROJECT, 2020
## make file
## File description:
## Cpool day10
##

NAME    =       my_runner

SRC     =	src/main.c			\
		src/open_window.c		\
		src/my_runner.c			\
		src/player_move.c		\
		src/create_enemy.c		\
		src/info_game.c			\
		src/animation.c			\
		src/background_move.c		\
		src/control_pos.c		\
		src/create_background.c		\
		src/draw_elems.c		\
		src/movement.c			\
		src/window_run.c		\
		src/clean_elem.c		\
		src/declare_elem.c		\
		src/display_rect.c		\
		lib/my/src/my_put_nbr.c		\
		lib/my/src/my_putchar.c		\
		lib/my/src/my_putstr.c

OBJ     =       $(SRC:.c=.o)

CC	=       gcc

CFLAGS +=	-I include/
CFLAGS += 	-pedantic
CFLAGS += 	-W -Wall -Wextra
CFLAGS += 	-Wno-long-long
CFLAGS += 	-g3

LIB	+=	-lcsfml-graphics -lcsfml-system -lcsfml-window

all:            $(NAME)

$(NAME):        $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIB)

clean:
	rm -rf $(OBJ)

fclean:         clean
	rm -rf $(NAME)

re:             fclean all
