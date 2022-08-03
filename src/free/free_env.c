/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** free_env
*/

#include "minishell.h"

void free_node(node_env *node)
{
    free(node->name);
    free(node->value);
    if (node->next)
        free_node(node->next);
    free(node);
}

void free_env(core_s *all)
{
    int i = 0;

    if (all->node)
        free_node(all->node);
}
