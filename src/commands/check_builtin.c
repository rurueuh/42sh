/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** check_builtin
*/

#include "minishell.h"

int check_two(char **command, core_s *all)
{
    if (my_strcmp(command[0], "cd") == 0) {
        cd_cmd(all, command);
        return 1;
    }
    if (my_strcmp(command[0], "setenv") == 0) {
        set_env(all, command[1], command[2]);
        return 1;
    }
    if (my_strcmp(command[0], "unsetenv") == 0) {
        unset_env(all, command[1]);
        return 1;
    }
    return 0;
}

int check_builtin(char **command, core_s *all)
{
    if (my_strcmp(command[0], "env") == 0) {
        print_env(all, command[1]);
        return 1;
    }
    if (my_strcmp(command[0], "exit") == 0) {
        exit_cmd(all, command);
        return 1;
    }
    if (check_two(command, all) == 1)
        return 1;
    return 0;
}
