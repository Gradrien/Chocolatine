/*
** EPITECH PROJECT, 2021
** my_strncat.c
** File description:
** functions concatenates n characters
*/

#include <stddef.h>
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int a = my_strlen(dest);
    int i = 0;

    if (dest == NULL || src == NULL)
        return NULL;
    while (src[i] != '\0' && i < nb) {
        dest[a + i] = src[i];
        i = i + 1;
    }
    dest[a + i] = '\0';
    return (dest);
}

char *my_strcat_real(char *dest, char const *src)
{
    int i = 0;
    int j = 0;
    int len_dest = my_strlen(dest);
    int len_src = my_strlen(src);
    char *new = malloc(sizeof(char) * (len_dest + len_src));

    while (j != len_dest) {
        new[j] = dest[j];
        j++;
    }
    while (i != len_src) {
        new[len_dest + i] = src[i];
        i = i + 1;
    }
    return (new);
}
