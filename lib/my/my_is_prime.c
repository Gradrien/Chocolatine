/*
** EPITECH PROJECT, 2021
** my_is_prime.c
** File description:
** without functions
*/

#include <stdio.h>

int my_is_prime(int nb)
{
    int i = 3;

    if (nb == 0 || nb == 1)
        return (0);
    if (nb == 2)
        return (0);
    while (i <= nb / 2) {
        if (nb % i == 0) {
            return (0);
        }
        i = i + 1;
    }
    return (1);
}
