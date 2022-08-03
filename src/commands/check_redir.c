/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** check_redir
*/

#include "minishell.h"

int verif_error(int here, int count, char **command)
{
    if (count == 0)
        return -1;
    if (count > 1) {
        my_printf("Ambiguous input redirect.\n");
        return -2;
    }
    if (here == 0) {
        my_printf("Invalid null command.\n");
        return -2;
    }
    if (here == my_arraylen(command) - 1) {
        my_printf("Missing name for redirect.\n");
        return -2;
    }
    return here;
}

int check_small_small(char **command, core_s *all)
{
    int here = -1;
    int count = 0;

    for (int i = 0; command[i] != NULL; i++)
        if (my_strcmp("<<", command[i]) == 0) {
            count++;
            here = i;
        }
    return verif_error(here, count, command);
}
