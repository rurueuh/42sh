/*
** EPITECH PROJECT, 2021
** int_to_binary.c
** File description:
** int_to_binary
*/

#include <stdlib.h>
#include "../../include/my.h"

char *binary(unsigned int nb)
{
    char *bin = malloc(sizeof(char) * 32);
    for (int i = 0; nb > 0; i++) {
        bin[i] = nb % 2 + '0';
        nb = nb / 2;
    }
    bin = my_revstr(bin);
    my_putstr(bin);
    free(bin);
    return (0);
}
