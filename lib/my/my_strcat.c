/*
** EPITECH PROJECT, 2022
** B-MUL-100-LIL-1-1-myrunner-alan.piedbois
** File description:
** my_strcat
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcat(char *first, char *second)
{
    char *result = malloc(sizeof(char) *
    (my_strlen(first) + my_strlen(second) + 1));
    if ((result) == NULL)
        return NULL;
    int size = 0;
    int i;
    for (i = 0; first[i] != '\0'; i++) {
        result[i] = first[i];
        size++;
    }
    for (int j = 0; second[j] != '\0'; j++) {
        result[j + i] = second[j];
        size++;
    }
    result[size] = '\0';
    return result;
}
