/*
** EPITECH PROJECT, 2021
** my_printf.C
** File description:
** my_printf
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "../../include/my.h"

void print_spe(char *str, int i, va_list args)
{
    if (str[i] == '%' && (str[i + 1] == 'i' || str[i + 1] == 'd')) {
        int nb = va_arg(args, int);
        my_put_nbr(nb);
    }
    if (str[i] == '%' && str[i + 1] == 'S') {
        char *nb = va_arg(args, char *);
        my_putstr_e(nb);
    }
    if (str[i] == '%' && str[i + 1] == '%') {
        my_putchar('%');
    }
}

void print_conv(char *str, int i, va_list args)
{
    if (str[i] == '%' && str[i + 1] == 'b') {
        int nb = va_arg(args, unsigned int);
        binary(nb);
    }
    if (str[i] == '%' && str[i + 1] == 'x') {
        int nb = va_arg(args, long unsigned int);
        hexa(nb, 0);
    }
    if (str[i] == '%' && str[i + 1] == 'X') {
        int nb = va_arg(args, long unsigned int);
        hexa(nb, 1);
    }
}

void print_conv_two(char *str, int i, va_list args)
{
    if (str[i] == '%' && str[i + 1] == 'o') {
        int nb = va_arg(args, unsigned int);
        octal(nb);
    }
    if (str[i] == '%' && str[i + 1] == 'p') {
        unsigned long nb = va_arg(args, unsigned long);
        write (1, "0x", 2);
        hexa(nb, 0);
    }
}

void print_char(char *str, int i, va_list args)
{
    if (str[i] == '%' && str[i + 1] == 'c') {
        char nb = va_arg(args, int);
        my_putchar(nb);
    }
    if (str[i] == '%' && str[i + 1] == 's') {
        char *nb = va_arg(args, char *);
        my_putstr(nb);
    }
}

int my_printf(char *str, ...)
{
    va_list args;
    va_start(args, str);
    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] != '%') {
            my_putchar(str[i]);
        } else {
            print_char(str, i, args);
            print_conv(str, i, args);
            print_conv_two(str, i, args);
            print_spe(str, i, args);
            i++;
        }
    }
}
