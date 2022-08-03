/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** set_env
*/

#include "minishell.h"

void set_next(node_env *node, char *name, char *line)
{
    node->next = malloc(sizeof(node_env));
    node->next->prev = node;
    node->next->name = my_strdup(name);
    node->next->value = my_strdup(line);
    node->next->index = node->index + 1;
    node->next->next = NULL;
}

void setline(node_env *node,char *line)
{
    free(node->value);
    node->value = NULL;
    node->value = my_strdup(line);
    return;
}

void main_setenv(char *name, char *line, core_s *all)
{
    node_env *node = all->node;

    while (node) {
        if (my_strcmp(node->name, name) == 0) {
            setline(node, line);
            return;
        }
        if (node->next == NULL) {
            set_next(node, name, line);
            return;
        }
        node = node->next;
    }
}

void create_new(core_s *all, char *name, char *line)
{
    all->node = malloc(sizeof(node_env));
    if (all->node == NULL)
        error_exit(all);
    all->node->name = my_strdup(name);
    all->node->value = my_strdup(line);
    all->node->index = 0;
    all->node->next = NULL;
    all->node->prev = NULL;
}

void set_env(core_s *all, char *name, char *line)
{
    if (!name) {
        print_env(all, NULL);
        return;
    }
    if (!line)
        line = "";
    name = my_strdup(name);
    if (name[my_strlen(name) - 1] == '=')
        name[my_strlen(name) - 1] = '\0';
    if (all->node == NULL) {
        create_new(all, name, line);
        return;
    }
    main_setenv(name, line, all);
    free(name);
}
