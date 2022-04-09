/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** functions that concatenates two strings
*/

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdio.h>

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int a = my_strlen(dest);
    int i = 0;

    if (src == NULL || dest == NULL)
        return NULL;
    while (src[i] != '\0') {
        dest[a + i] = src[i];
        i = i + 1;
    }
    dest[a + i] = '\0';
    return (dest);
}
