/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** check_pipe
*/

#include "minishell.h"

int check_pipe(char **cmd)
{
    for (int i = 0; cmd[i]; i++)
        if (cmd[i][0] == '|')
            return TRUE;
    return FALSE;
}
