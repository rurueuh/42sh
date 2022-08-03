/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** init_command
*/

#include "minishell.h"

void init_command(char *cmd, core_s *all)
{
    int count = 1;
    for (int i = 0; cmd[i]; i++)
        if (cmd[i] == ';')
            count++;
    all->command = malloc(sizeof(char **) * (count + 1));
    if (all->command == NULL)
        error_exit(all);
}
