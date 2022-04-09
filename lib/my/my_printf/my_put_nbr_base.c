/*
** EPITECH PROJECT, 2021
** convert base
** File description:
** convert base
*/

#include "my.h"

int my_put_nbr_base(int nb, char const *base)
{
    int rest;
    int decim = 1;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    while ((nb / decim) >= my_strlen(base)) {
        decim = decim * my_strlen(base);
    }
    while (decim > 0) {
        rest = (nb / decim) % my_strlen(base);
        my_putchar(base[rest]);
        decim = decim / my_strlen(base);
    }
    return nb;
}
