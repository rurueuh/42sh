/*
** EPITECH PROJECT, 2021
** B-CPE-110-LIL-1-1-pushswap-alan.piedbois
** File description:
** my_putcharstar
*/
int my_printf(char *str, ...);

void my_putcharstar(char **array)
{
    for (int i = 0; array[i] != 0; i++) {
        my_printf("%i = %s\n", i, array[i]);
    }
}
