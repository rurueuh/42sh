/*
** EPITECH PROJECT, 2021
** int_to_octal.c
** File description:
** int_to_octal
*/

#include <stdlib.h>
#include "../../include/my.h"

char *octal(unsigned int nb)
{
    char *oct = malloc(sizeof(char) * 32);
    for (int i = 0; nb > 0; i++) {
        oct[i] = nb % 8 + '0';
        nb = nb / 8;
    }
    oct = my_revstr(oct);
    my_putstr(oct);
    free(oct);
    return (0);
}
