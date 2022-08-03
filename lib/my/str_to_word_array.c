/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** str_to_word_array
*/

#include "../../include/my.h"

char **split_string(char *str, char c)
{
    if (str[0] == '\0')
        return NULL;
    int index = 0;
    int nb = 1;
    for (int i = 0; str[i]; i++)
        if (str[i] == c)
            nb++;
    char **paths = malloc(sizeof(char *) * (nb + 2));
    for (int i = 0; str[i]; i++) {
        if (str[i] == c) {
            paths[index] = my_strndup(str, i);
            str += i + 1;
            i = -1;
            index++;
        } else if (str[i + 1] == '\0') {
            paths[index] = my_strdup(str);
            paths[index + 1] = NULL;
        }
    }
    return paths;
}
