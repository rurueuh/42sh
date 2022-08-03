/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** ask_input
*/

#include "minishell.h"

void signal_handler2(int sig)
{
    if (sig == SIGINT)
        my_printf("\n");
    my_putstr("? ");
}

char *ask_input(core_s *all)
{
    char *buff;
    size_t size = 1;
    buff = malloc(sizeof(char));
    size_t end = getline(&buff, &size, stdin);
    if (end == -1 && all->r_value == 0) {
        exit(0);
    }
    if (end == -1 && all->r_value == 1) {
        exit(1);
    }
    cleanstring(buff);
    return buff;
}

void ask_good_input(char *command)
{
    char *buff = NULL;
    size_t size = 1;

    while (1) {
        my_printf("? ");
        signal(SIGINT, signal_handler2);
        if (getline(&buff, &size, stdin) == -1)
            return;
        if (my_strcmp(buff, command) == 10)
            return;
    }
}
