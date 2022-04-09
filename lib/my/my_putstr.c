/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** displays one by one
*/

#include <stddef.h>

void my_putchar(char c);

int my_putstr(char const *str)
{
    int i = 0;

    if (str == NULL)
        return 84;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}
