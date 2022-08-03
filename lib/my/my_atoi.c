/*
** EPITECH PROJECT, 2021
** B-CPE-110-LIL-1-1-pushswap-alan.piedbois
** File description:
** my_atoi
*/
int check_sign(char *str, int i, int neg)
{
    if (i == 0) {
        return 1;
    }
    if (neg == 0) {
        if (str[i - 1] == '-') {
            return -1;
        } else {
            return 1;
        }
    } else {
        return neg;
    }
}

int my_atoi(char *str)
{
    int total = 0;
    int negggg = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= '9' && str[i] >= '0') {
            negggg = check_sign(str, i, negggg);
            total = total * 10 + str[i] - '0';
        }
    }
    total *= negggg;
    return total;
}
