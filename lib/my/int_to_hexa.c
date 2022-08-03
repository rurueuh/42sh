/*
** EPITECH PROJECT, 2021
** int_to_hexa.c
** File description:
** int_to_hexa
*/
#include "../../include/my.h"

char *hexa(unsigned long nb, int choose)
{
    int res = 0;
    if (nb > 16){
        res = nb % 16;
        nb = nb / 16;
        hexa(nb, choose);
    } else {
        res = nb % 16;
    }
    if (res > 9){
        my_putchar(res + 'a' - 10 - choose * 32);
    }
    if (res <= 9) {
        my_putchar(res + 48);
    }
}
