##
## EPITECH PROJECT, 2021
## my_runner
## File description:
## Tsu
##

NAME = 42sh

SRC		= 	src/core/minishell.c	\
			src/core/error_exit.c	\
			src/init/init_env.c		\
			src/init/main_init.c		\
			src/init/init_command.c	\
			src/input/ask_input.c		\
			src/input/get_commands.c		\
			src/core/shell_loop.c		\
			src/free/free_command.c		\
			src/free/free_all.c	\
			src/free/free_env.c		\
			src/commands/command_handling.c	\
			src/commands/check_builtin.c	\
			src/commands/check_redir.c	\
			src/commands/execute.c	\
			src/commands/try_cmd.c		\
			src/commands/check_pipe.c	\
			src/commands/path_handling.c		\
			src/commands/builtins/env/print_env.c	\
			src/commands/pipe_handling.c	\
			src/commands/builtins/env/get_env.c	\
			src/commands/builtins/exit/exit_cmd.c	\
			src/commands/builtins/cd/cd_cmd.c	\
			src/commands/builtins/env/set_env.c	\
			src/commands/builtins/env/unset_env.c	\

INCLUDE = -I include/

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	cd lib/my && make re -s
	gcc -g $(INCLUDE) $(SRC) -o $(NAME) -L ./lib/my/ -lmy

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
