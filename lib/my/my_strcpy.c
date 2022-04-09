/*
** EPITECH PROJECT, 2021
** my_strcpy.c
** File description:
** copies string into another
*/

char *my_strcpy(char *dest, char const *src)
{
    int i;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}
