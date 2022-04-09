/*
** EPITECH PROJECT, 2021
** my_compute_factorial_rec.c
** File description:
** recursive fonction
*/

int my_compute_factorial_rec(int nb)
{
    int result;

    if (nb < 0 || nb > 12) {
        return (0);
    }
    if (nb == 0 || nb == 1) {
        return (1);
    }
    result = nb * (my_compute_factorial_rec(nb - 1));
    return (result);
}
