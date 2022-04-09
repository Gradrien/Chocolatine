/*
** EPITECH PROJECT, 2021
** my_strdup.c
** File description:
** function allocates memory and copies the string
*/

#include <stddef.h>
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    char *str = NULL;
    int i = 0;

    if (src == NULL)
        return NULL;
    str = malloc(sizeof(char) * my_strlen(src) + 1);
    while (i < my_strlen(src)) {
        str[i] = src[i];
        i = i + 1;
    }
    str[i] = '\0';
    return (str);
}

char *my_strndup(const char *src, int nb)
{
    char *str;
    int i = 0;

    if (src == NULL || nb == 0)
        return NULL;
    if (nb > my_strlen(src))
        nb = my_strlen(src);
    str = malloc(sizeof(char) * (nb + 1));
    while (i < nb) {
        str[i] = src[i];
        i = i + 1;
    }
    str[i] = '\0';
    return (str);
}
