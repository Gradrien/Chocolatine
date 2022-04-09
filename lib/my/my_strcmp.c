/*
** EPITECH PROJECT, 2021
** my_strcmp.c
** File description:
** reproduce the behavior the strcmp functions
*/

#include <stdlib.h>

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    if (s1 == NULL || s2 == NULL)
        return 1;
    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] - s2[i] != 0) {
            return (s1[i] - s2[i]);
        }
        ++i;
    }
    return (0);
}
