/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** displays the number given as parameter
*/

#include "my.h"

void my_putchar(char c);

void my_put_nbr_uns(unsigned int nb)
{
    if (nb >= 0 && nb < 10)
        my_putchar(nb + 48);
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + 48);
    }
}
