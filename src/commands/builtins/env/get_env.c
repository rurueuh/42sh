/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** get_env
*/

#include "minishell.h"

char *get_env(core_s *all, char *str)
{
    node_env *node = all->node;

    if (str[my_strlen(str) - 1] == '=')
        str[my_strlen(str) - 1] = '\0';
    while (node) {
        if (my_strcmp(node->name, str) == 0)
            return node->value;
        if (node->next == NULL)
            break;
        node = node->next;
    }
    return NULL;
}
