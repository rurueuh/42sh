/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** free_all
*/

#include "minishell.h"

void free_all(core_s *all)
{
    free_env(all);
    free_command(all->command);
    free(all);
}
