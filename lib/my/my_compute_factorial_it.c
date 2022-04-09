/*
** EPITECH PROJECT, 2021
** my_compute_factorial_it.c
** File description:
** returns the factorial of the number
*/

int my_compute_factorial_it(int nb)
{
    int result = nb;

    if (nb < 0 || nb > 12) {
        return (0);
    }
    if (nb == 0 || nb == 1) {
        return (1);
    }
    while (nb > 1) {
        result = result * (nb - 1);
        nb = nb - 1;
    }
    return (result);
}
