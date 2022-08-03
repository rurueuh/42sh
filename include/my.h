/*
** EPITECH PROJECT, 2021
** header for my.h
** File description:
** my
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#ifndef mylib
    #define mylib
        void my_putchar(char c);
        char *my_straddchar(char *str, char c);
        void free_array(char **array);
        int my_strstr(char *str, char const *to_find);
        int my_putstr(char const *str);
        int my_strlen(char const *str);
        char *my_strcpy(char *dest, char const *src);
        char *my_strcat(char *dest, char const *src);
        char *my_revstr(char *str);
        int my_show_word_array(char * const *tab);
        char *binary(unsigned int nb);
        char *hexa(unsigned long nb, int choose);
        char *octal(unsigned int nb);
        int my_putstr_e(char const *str);
        int my_printf(char *str, ...);
        int my_atoi(char *str);
        void my_putcharstar(char **array);
        char *cleanstring(char *str);
        int my_arraylen(char **array);
        int my_put_nbr(int nb);
        char *array_to_str(char **array, char car);
        char *my_strdup(char *src);
        char *my_strndup(char *str, int i);
        int my_strncmp(char *s1, char *s2, int n);
        char **split_string(char *str, char delim);
        int my_strcmp ( char const * s1 , char const * s2);
#endif
