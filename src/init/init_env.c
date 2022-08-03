/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** init_main
*/

#include "minishell.h"

char *get_name(char *line)
{
    int i;

    for (i = 0; line[i] != '='; i++);
    char *name = malloc(sizeof(char) * i + 1);
    if (name == NULL)
        error_exit(NULL);
    for (int j = 0; j < i; j++)
        name[j] = line[j];
    name[i] = '\0';
    return name;
}

char *get_value(char *value)
{
    int i;
    int j;
    for (i = 0; value[i - 1] != '='; i++);
    char *line = malloc(sizeof(char) * (my_strlen(value) - i) + 1);
    if (line == NULL)
        return NULL;
    for (j = 0; j < my_strlen(value) - i; j++)
        line[j] = value[j + i];
    line[j] = '\0';
    return line;
}

node_env *create_node(char **envi, core_s *all, int i)
{
    node_env *node = malloc(sizeof(node_env));
    if (node == NULL)
        error_exit(all);
    node->name = get_name(envi[i]);
    node->value = get_value(envi[i]);
    node->index = i;
    if (envi[i + 1] != NULL) {
        node->next = create_node(envi, all, i + 1);
        if (node->index)
            node->next->prev = node;
        else
            node->prev = NULL;
    } else
        node->next = NULL;
    return node;
}

void init_env(char **envi, core_s *mini_s)
{
    int i = 0;

    if (envi[0] != NULL)
        mini_s->node = create_node(envi, mini_s, i);
    else
        mini_s->node = NULL;
}
