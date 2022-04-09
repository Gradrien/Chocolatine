/*
** EPITECH PROJECT, 2021
** convert base
** File description:
** convert base
*/

#include "my.h"

void my_put_nbr_base_uns(unsigned long nb, char const *base)
{
    int rest;
    long decim = 1;

    while ((nb / decim) >= my_strlen(base)) {
        decim = decim * my_strlen(base);
    }
    while (decim > 0) {
        rest = (nb / decim) % my_strlen(base);
        my_putchar(base[rest]);
        decim = decim / my_strlen(base);
    }
}
