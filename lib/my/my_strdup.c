/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** my_strdup
*/

#include <stdlib.h>

int my_strlen(char *str);

char * my_strdup(char *src)
{
    int len = my_strlen(src);
    char *dest = malloc(sizeof(char) * len + 1);
    if (dest == NULL)
        return NULL;
    for (int i = 0; src[i]; i++)
        dest[i] = src[i];
    dest[len] = '\0';
    return dest;
}
