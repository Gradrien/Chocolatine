/*
** EPITECH PROJECT, 2021
** my_str_isprintable.c
** File description:
** without functions
*/

#include <stddef.h>

int my_str_isprintable(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (1);
    while (str[i] != '\0') {
        if (str[i] >= 32 && str[i] < 127)
            i = i + 1;
        else
            return (0);
    }
    return (1);
}
