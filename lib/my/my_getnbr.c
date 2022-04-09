/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** without functions
*/

#include <stddef.h>
#include <stdio.h>

int my_strlen(char const *str);

int my_getnbr(char const *str)
{
    int i = 0;
    long result = 0;
    int signe = 1;

    for (; str[i] == '-' || str[i] == '+'; i++) {
        if (str[i] == '-')
            signe = signe * (-1);
    }
    if (my_strlen(str) - i > 10)
        return (0);
    while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57)) {
        result = result + str[i] - 48;
        result = result * 10;
        i = i + 1;
    }
    result = (result / 10) * signe;
    if (result < -2147483648 || result > 2147483647) {
        return (0);
    }
    return (result);
}
