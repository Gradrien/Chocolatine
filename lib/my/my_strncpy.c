/*
** EPITECH PROJECT, 2021
** my_strncpy.c
** File description:
** fucntion copies n characters
*/

#include "my.h"
#include <stdlib.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int b = 0;

    b = my_strlen(src);
    while (i != b && i < n) {
        dest[i] = src[i];
        i = i + 1;
    }
    if (n > b)
        dest[i] = '\0';
    return (dest);
}
