/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** unsetenv
*/

#include "minishell.h"

void freeing(node_env *node)
{
    if (node->prev)
        node->prev->next = node->next;
    if (node->next)
        node->next->prev = node->prev;
    free(node->name);
    free(node->value);
    free(node);
}

void unset_env(core_s *all, char *name)
{
    if (!name) {
        my_printf("unsetenv: Too few arguments.\n");
        all->r_value = 1;
        return;
    } else
        all->r_value = 0;
    if (name[my_strlen(name) - 1] == '=')
        name[my_strlen(name) - 1] = '\0';
    node_env *node = all->node;
    while (node) {
        if (my_strcmp(node->name, name) == 0) {
            freeing(node);
            return;
        }
        if (node->next == NULL)
            return;
        node = node->next;
    }
}
