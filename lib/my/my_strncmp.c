/*
** EPITECH PROJECT, 2022
** B-PSU-210-LIL-2-1-minishell2-alan.piedbois
** File description:
** my_strncmp
*/

int my_strncmp(char *s1, char *s2, int n)
{
    int i = 0;

    while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
        i++;
    if (i == n)
        return (0);
    return (s1[i] - s2[i]);
}
