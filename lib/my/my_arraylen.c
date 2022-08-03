/*
** EPITECH PROJECT, 2022
** B-PSU-101-LIL-1-1-minishell1-alan.piedbois
** File description:
** my_arraylen
*/

#include <stdlib.h>
#include <stdio.h>

int my_arraylen(char **array)
{
    int i = 0;

    for (i; array[i] != NULL; i++);
    return i;
}
