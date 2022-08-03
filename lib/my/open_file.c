/*
** EPITECH PROJECT, 2022
** B-CPE-110-LIL-1-1-antman-alan.piedbois
** File description:
** open_file
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char *file_to_str(char *path)
{
    int size = 0;
    char *buff = malloc(100000);
    if (buff == NULL)
        return NULL;
    int fd = open(path, O_RDONLY);
    if (fd == -1)
        return NULL;
    size = read(fd, buff, 100000);
    buff[size] = '\0';
    close(fd);
    return buff;
}
