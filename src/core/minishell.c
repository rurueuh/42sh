/*
** EPITECH PROJECT, 2022
** B-PSU-101-LIL-1-1-minishell1-alan.piedbois
** File description:
** minishell1
*/

#include "minishell.h"

int main(int ac, char **argv, char **env)
{
    core_s *all = main_init(env);
    shell_loop(all);
}
