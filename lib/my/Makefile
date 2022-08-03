##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## ruru !
##

NAME = libmy.a

SRC	= 	my_putchar.c \
		my_strstr.c \
		my_putstr.c \
		my_strlen.c \
		my_strcpy.c \
		my_strcat.c \
		my_revstr.c \
		int_to_binary.c \
		int_to_hexa.c	\
		int_to_octal.c	\
		my_putstr_e.c	\
		my_printf.c	\
		my_atoi.c	\
		my_put_nbr.c	\
		my_strcmp.c	\
		my_putcharstar.c	\
		str_to_word_array.c	\
		cleanstring.c	\
		my_arraylen.c	\
		array_to_str.c	\
		free_array.c	\
		open_file.c	\
		my_strdup.c	\
		my_strncmp.c	\
		my_straddchar.c	\
		my_strndup.c   \

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -g -c $(SRC)
	ar rc $(NAME) $(OBJ)
	make clean

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all