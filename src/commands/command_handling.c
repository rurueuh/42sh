/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** exec_command
*/

#include "minishell.h"

void command_handling(core_s *all, char *buff)
{
    int place = 0;

    for (int i = 0; all->command[i]; i++) {
        place = check_small_small(all->command[i], all);
        if (place == -2)
            break;
        if (all->command[i][0][0] == '\n')
            continue;
        if (check_builtin(all->command[i], all) == 1)
            continue;
        if (place != -1)
            ask_good_input(all->command[i][place + 1]);
        if (check_pipe(all->command[i]) == TRUE) {
            try_cmd(all, all->command[i], buff);
            break;
        }
        try_cmd(all, all->command[i], buff);
        break;
    }
}
