/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** my_put_nbr
*/

#include "../../include/my.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        nb *= -1;
        my_putchar(45);
    }

    if (nb < 10) {
        my_putchar(nb + '0');
    } else {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    return (0);
}
