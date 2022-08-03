/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** my_straddchar
*/

int my_strlen(char *str);
#include <stdlib.h>

char *my_straddchar(char *str, char c)
{
    int i = 0;
    char *new = malloc(sizeof(char) * (my_strlen(str) + 2));

    if (new == NULL)
        return NULL;
    for (; str[i] != '\0'; i++)
        new[i] = str[i];
    new[i] = c;
    new[i + 1] = '\0';
    return new;
}
