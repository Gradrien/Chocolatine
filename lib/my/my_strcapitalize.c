/*
** EPITECH PROJECT, 2021
** my_strcapitalize.c
** File description:
** function capitalize first letter
*/

#include <stddef.h>

char *my_lowcase(char *str);

char *my_strcapitalize(char *str)
{
    int i = 0;

    if (str == NULL)
        return (NULL);
    my_lowcase(str);
    if (str[0] >= 97 && str[0] <= 122)
        str[0] = str[0] - 32;
    while (str[i] != '\0') {
        if ((str[i - 1] == ' ' || str[i - 1] == '+' || str[i - 1] == '-') &&
        (str[i] >= 97 && str[i] <= 122))
            str[i] = str[i] - 32;
        i = i + 1;
    }
    return (str);
}
