/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** main_init
*/

#include "minishell.h"

core_s *main_init(char **env)
{
    core_s *all = malloc(sizeof(core_s));
    if (all == NULL)
        error_exit(all);
    init_env(env, all);
    return all;
}
