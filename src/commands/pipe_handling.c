/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** pipe_handling
*/

#include "minishell.h"

int malloc_cmd(char *line)
{
    int i = 1;
    for (int j = 0; line[j]; j++)
        if (line[j] == '|')
            i++;
    return i;
}

void pipe_exec(char ***cmd, int fd[2], core_s *all)
{
    pid_t pid;
    int save = 0;
    for (int i = 0; cmd[i] != NULL; i++) {
        pipe(fd);
        if ((pid = fork()) == -1)
            return;
        else if (pid == 0) {
            dup2(save, 0);
            close(fd[0]);
            try_cmd(all, cmd[i], cmd[i]);
            exit(1);
        } else {
            close(fd[1]);
            save = fd[0];
        }
    }
    waitpid(pid, NULL, 0);
}

void free_pipe(char ***commands, char *saveptr, int print)
{
    if (print == 1)
        my_printf("Invalid null command.\n");
    for (int i = 0; commands[i] != NULL; i++)
        free_array(commands[i]);
    free(commands);
    free(saveptr);
}

void pipe_handling(char **allcmd, core_s *all)
{
    char *buff = array_to_str(allcmd, ' ');
    char *saveptr = buff;
    char ***commands = malloc(sizeof(char **) * (malloc_cmd(buff) + 1));
    int fd[2];
    int index = 0;
    buff = strtok(buff, "|");
    while ( buff != NULL ) {
        commands[index] = split_string(cleanstring(buff), ' ');
        if (commands[index] == NULL) {
            free_pipe(commands, saveptr, 1);
            return;
        }
        buff = strtok(NULL, "|");
        index++;
    }
    commands[index] = NULL;
    pipe_exec(commands, fd, all);
    free_pipe(commands, saveptr, 0);
}
