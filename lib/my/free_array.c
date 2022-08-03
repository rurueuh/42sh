/*
** EPITECH PROJECT, 2022
** B-CPE-110-LIL-1-1-BSQ-alan.piedbois
** File description:
** free_array
*/

#include <unistd.h>
#include <stdlib.h>

void free_array(char **array)
{
    for (int i = 0; array[i]; i++)
        free(array[i]);
    free(array);
    return;
}
