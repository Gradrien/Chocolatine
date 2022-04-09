/*
** EPITECH PROJECT, 2021
** my_strstr.c
** File description:
** reproduce the behavior of the strstr functions
*/

#include <stddef.h>
#include <stdio.h>

int my_strlen(char const *str);
int my_strncmp(char const *s1, char const * s2, int n);

char *my_strstr(char *str, char const *to_find)
{
    int a = 0;
    int b = 0;

    while (str[a] != '\0') {
        if (str[a] == to_find[0]) {
            b = my_strncmp(&str[a], to_find, my_strlen(to_find));
        } else if (b == 0) {
            return (&str[a]);
        }
    }
    a = a + 1;
}
