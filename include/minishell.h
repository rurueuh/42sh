/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** minishell2
*/

#ifndef MINISHELL2_H_
    #define MINISHELL2_H_

    #include "minishell.h"
    #include "my.h"
    #define SUCCESS 42
    #define FAILURE 84
    enum boolean {
        FALSE,
        TRUE
    };

    typedef struct node_env {
        int index;
        char *name;
        char *value;
        struct node_env *next;
        struct node_env *prev;
    } node_env;

    typedef struct core {
        char *path;
        char ***command;
        node_env *node;
        int r_value;
    } core_s;

    #include "header.h"

#endif
