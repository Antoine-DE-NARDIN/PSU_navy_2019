##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

NAME = navy

SRC = 	main.c \
		description.c \
		print_map.c \
		open_read_pos.c \
		otherfunc.c \
		set_map.c \
		str_to_tab.c \
		navy_loop.c \
		getpid.c \
		verif_of_placements.c \
		put_boats.c \
		battle.c \
		attack_utilities.c \
		signals_start.c \
		signals_turn.c \
		signals_wait.c \
		sig_set.c \
		sig_call.c \
		pos_verif.c \
		win_or_loose.c


OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -g3 -c $(SRC)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
