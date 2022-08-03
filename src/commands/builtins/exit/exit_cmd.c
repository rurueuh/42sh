/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** exit_cmd
*/

#include "minishell.h"

void exit_cmd(core_s *all, char **command)
{
    int exi = 0;

    if (command[1] != NULL && my_atoi(command[1]) == 0) {
        my_printf("exit: Expression Syntax.\n");
        return;
    }
    if (command[2] != NULL) {
        my_printf("exit: Expression Syntax.\n");
        return;
    }
    if (command[1] == NULL)
        exi = 0;
    else
        exi = my_atoi(command[1]);
    free_all(all);
    my_printf("exit\n");
    exit(exi);
}
