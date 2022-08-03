/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** my_revstr
*/
#include "../../include/my.h"

char *my_revstr(char *str)
{
    char mot;
    for (int i = 0; i < my_strlen(str)/2; i++) {
        mot = str[i];
        str[i] = str[my_strlen(str) - i - 1];
        str[my_strlen(str) - i - 1] = mot;
    }
    return (str);
}
