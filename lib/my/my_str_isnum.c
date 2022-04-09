/*
** EPITECH PROJECT, 2021
** my_str_isnum.c
** File description:
** without functions
*/

#include <stddef.h>

int my_str_isnum(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (1);
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9')
            i = i + 1;
        else
            return (0);
    }
    return (1);
}
