/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** cd_cmd
*/

#include "minishell.h"

void replace_pwd(core_s *all)
{
    char cwd[256];
    if (getcwd(cwd, sizeof(cwd)) == NULL)
        return;
    set_env(all, "OLDPWD", get_env(all, "PWD"));
    set_env(all, "PWD", cwd);
}

void change_dir(core_s *all, char *path)
{
    if (path[0] == '-') {
        if (chdir(get_env(all, "OLDPWD")) == -1) {
            my_putstr("cd: OLDPWD not set\n");
            return;
        }
        replace_pwd(all);
        return;
    }
    switch (chdir(path)) {
        case -1:
            my_putstr("cd: No such file or directory\n");
            all->r_value = 1;
            break;
        case -2:
            my_putstr("cd: Not a directory\n");
            all->r_value = 1;
            break;
        default:
            all->r_value = 0;
            replace_pwd(all);
    }
}

void cd_cmd(core_s *all, char **command)
{
    if (my_strcmp(command[0], "cd") == 0) {
        if (command[2] != NULL) {
            my_printf("cd: Too many arguments.\n");
            return;
        }
        if (command[1] == NULL) {
            change_dir(all, get_env(all, "HOME"));
            return;
        } else {
            change_dir(all, command[1]);
        }
    }
}
