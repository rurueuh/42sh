/*
** EPITECH PROJECT, 2022
** B-CPE-110-LIL-1-1-BSQ-alan.piedbois
** File description:
** array_to_str
*/

#include "../../include/my.h"
#include <stdio.h>
#include <stdlib.h>

char *array_to_str(char **array, char car)
{
    int pos = 0;
    int nb_malloc = 0;
    for (int i = 0; array[i] != 0; i++)
        for (int j = 0; array[i][j] != '\0'; j++) {
            nb_malloc++;
        }
    char *str = malloc(sizeof(char) * nb_malloc + my_arraylen(array));
    for (int i = 0; array[i] != 0; i++) {
        for (int j = 0; array[i][j] != '\0'; j++) {
            str[pos] = array[i][j];
            pos++;
        }
        str[pos] = car;
        pos++;
    }
    str[pos - 1] = '\0';
    return str;
}
