/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** my_strndup
*/

#include <stdio.h>
#include <stdlib.h>

char *my_strndup(char *str, int i)
{
    char *new = malloc(sizeof(char) * (i + 1));
    if (new == NULL)
        return NULL;
    for (int j = 0; j < i; j++)
        new[j] = str[j];
    new[i] = '\0';
    return new;
}
