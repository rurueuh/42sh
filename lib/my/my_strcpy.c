/*
** EPITECH PROJECT, 2021
** my_strcpy.c
** File description:
** my_strcpy
*/
int my_strlen(char *str);

char *my_strcpy(char *dest, char *src)
{
    if (my_strlen(dest) > my_strlen(src)) {
        for (int j = 0; dest[j] != '\0'; j++) {
            dest[j] = '\0';
        }
    }
    for (int i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    return dest;
}
