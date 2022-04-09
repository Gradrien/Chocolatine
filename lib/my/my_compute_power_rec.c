/*
** EPITECH PROJECT, 2021
** my_compute_power_rec.c
** File description:
** recursive fonction
*/

int my_compute_power_rec(int nb, int p)
{
    int result;

    if (p == 0) {
        return (1);
    }
    if (nb == 0 || p < 0) {
        return (0);
    }
    result = nb * (my_compute_power_rec(nb, p - 1));
    return (result);
}
