/*
** EPITECH PROJECT, 2021
** my_strncmp.c
** File description:
** reproduce the behavior of the strncmp functions
*/

#include <stdlib.h>

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    if (s1 == NULL || s2 == NULL)
        return (1);
    while (s1[i] != '\0' && s2[i] != '\0' && i < n) {
        if (s1[i] - s2[i] != 0) {
            return (s1[i] - s2[i]);
        }
        i = i + 1;
    }
    return (0);
}
