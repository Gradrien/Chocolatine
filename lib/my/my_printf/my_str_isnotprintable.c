/*
** EPITECH PROJECT, 2021
** my_str_isprintable.c
** File description:
** without functions
*/

#include "my.h"
#include <stddef.h>

int my_oct(int nb)
{
    int rest;
    int decim = 1;
    char base[8] = "01234567";

    while ((nb / decim) >= 8) {
        (decim = decim * 8);
    }
    if (decim == 1)
        my_put_nbr(0);
    my_put_nbr(0);
    while (decim > 0) {
        rest = (nb / decim) % 8;
        my_putchar(base[rest]);
        decim = decim / 8;
    }
    return nb;
}

void my_str_isnotprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 32 && str[i] <= 127) {
            my_putchar(str[i]);
        } else {
            my_putchar('\\');
            my_oct(str[i]);
        }
        i = i + 1;
    }
}
