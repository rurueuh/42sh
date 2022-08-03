/*
** EPITECH PROJECT, 2021
** my_putstr_e.c
** File description:
** my_putstr_e
*/
#include "../../include/my.h"
#include<unistd.h>

int my_putstr_e(char const *str)
{
    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] >= 32 && str[i] < 127) {
            my_putchar(str[i]);
        } else {
            write (1, "\\", 1);
            octal(str[i]);
        }
    }
    return (0);
}
