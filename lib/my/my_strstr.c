/*
** EPITECH PROJECT, 2021
** my_strstr.c
** File description:
** my_strstr
*/

#include "../../include/my.h"

int is_word(char *str, char const *to_find, int i)
{
    for (int new_i = 0; to_find[new_i] != '\0'; new_i++) {
        if (to_find[new_i] != str[i + new_i]) {
            return -1;
        }
    }
    return 0;
}

int my_strstr(char *str, char const *to_find)
{
    if (is_word(str, to_find, 0) == 0)
        return 1;
    return -1;
}
