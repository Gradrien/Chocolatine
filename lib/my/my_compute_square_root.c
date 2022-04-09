/*
** EPITECH PROJECT, 2021
** my_compute_square_root.c
** File description:
** function return
*/

void my_putchar(char c);

int my_compute_square_root(int nb)
{
    int result = 1;

    if (nb <= 0) {
        return (0);
    }
    while (result * result != nb && nb < 46340) {
        result = result + 1;
    }
    return (result);
}
