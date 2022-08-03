/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** execute
*/

#include "minishell.h"

void check_signal(int signal)
{
    if (WCOREDUMP(signal) == 1)
        my_putstr("Segmentation fault (core dumped)\n");
    else if (WIFSIGNALED(signal) == 1)
        my_putstr("Segmentation fault\n");
}

int execute(char *cmd_path, char **command, core_s *all)
{
    pid_t pid = fork();
    int status;
    if (pid == 0) {
        if (execve(cmd_path, command, NULL) == -1) {
            free(cmd_path);
            exit(84);
        }
    } else {
        all->r_value = 0;
        free(cmd_path);
        waitpid(pid, &status, 0);
        check_signal(status);
        return status;
    }
}
