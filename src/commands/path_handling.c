/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** try_path
*/

#include "minishell.h"

void end_of_function(int found, core_s *all, char **paths, char **command)
{
    if (found == FALSE) {
        my_printf("%s: Command not found.\n", command[0]);
        all->r_value = 1;
    }
    free_array(paths);
}

char *create_path(char *path, char **command)
{
    char *tmp = my_straddchar(path, '/');
    char *cmd_path = my_strcat(tmp, command[0]);
    free(tmp);
    return cmd_path;
}

int errcmd(char **command)
{
    my_printf("%s: Command not found.\n", command[0]);
    return 84;
}

int path_handling(core_s *all, char **command)
{
    int found = FALSE;
    char *path = get_env(all, "PATH");
    if (path == NULL || path[0] == '\0')
        return errcmd(command);
    char **paths = split_string(path, ':');
    char *cmd_path = NULL;

    for (int i = 0; paths[i]; i++) {
        cmd_path = create_path(paths[i], command);
        if (access(cmd_path, F_OK) == 0) {
            found = TRUE;
            execute(cmd_path, command, all);
            break;
        }
        free(cmd_path);
    }
    end_of_function(found, all, paths, command);
}
