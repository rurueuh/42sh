/*
** EPITECH PROJECT, 2022
** B-PSU-101-LIL-1-1-minishell1-alan.piedbois
** File description:
** cleanstring
*/

#include <stdlib.h>
#include <stdio.h>
#include "../../include/my.h"

char *decal_str(char *str, int i)
{
    for (i; str[i + 1] != '\0'; i++) {
        str[i] = str[i + 1];
    }
    str[i] = '\0';
    return str;
}

char *supaclean(char *str)
{
    int i;
    for (i = 1; str[i] != '\0'; i++) {
        if ((str[i] == ' ' || str[i] == '\t') && (str[i + 1] == ' ' ||
        str[i + 1] == '\t' || str[i + 1] == '\0' ||
        str[i + 1] == ';' || str[i - 1] == ';' || str[i + 1] == '&')) {
            decal_str(str, i);
        } else if (str[i] == '\t') {
            str[i] = ' ';
        }
    }
    if (str[i - 1] == '\n')
        str[i - 1] = '\0';
    return str;
}

char *cleanstring(char *str)
{
    while (str[0] == ' ' || str[0] == '\t')
        decal_str(str, 0);
    for (int i = 0; str[i] != '\0'; i++) {
        str = supaclean(str);
    }
    return str;
}
