/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** wait_input
*/

#include "minishell.h"

void signal_handler(int sig)
{
    if (sig == SIGINT)
        my_printf("\n");
    my_putstr("$> ");
}

void get_commands(core_s *all)
{
    my_printf("$> ");
    int index = 0;
    signal(SIGINT, signal_handler);
    char *buff = ask_input(all);
    char *command_dup = my_strdup(buff);
    init_command(buff, all);
    buff = strtok(buff, ";");
    while ( buff != NULL ) {
        all->command[index] = split_string(buff, ' ');
        buff = strtok(NULL, ";");
        index++;
    }
    all->command[index] = NULL;
    command_handling(all , command_dup);
    free(command_dup);
    free_command(all->command);
}
