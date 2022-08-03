/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** free_command
*/

#include "minishell.h"

void free_command(char ***command)
{
    for (int i = 0; command[i]; i++) {
        for (int j = 0; command[i][j]; j++) {
            free(command[i][j]);
            command[i][j] = NULL;
        }
        free(command[i]);
        command[i] = NULL;
    }
    free(command);
}
