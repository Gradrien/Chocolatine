/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** swaps
*/

void my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
