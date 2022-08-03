/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** print_env
*/

#include "minishell.h"

void print_env(core_s *all, char *command)
{
    node_env *node = all->node;

    if (command != NULL && fopen(command, "O_RDONLY") == NULL) {
        my_printf("env: '%s': No such file or directory\n", command);
        all->r_value = 1;
        return;
    } else
        all->r_value = 0;
    while (node) {
        if (node->name[my_strlen(node->name) - 1] == '=')
            my_printf("%s%s\n", node->name, node->value);
        else
            my_printf("%s=%s\n", node->name, node->value);
        node = node->next;
    }
}
