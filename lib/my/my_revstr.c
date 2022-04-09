/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** reverses a string
*/

int my_strlen(char const *str);

void my_swapchar(char *a, char *b)
{
    char c = *a;
    *a = *b;
    *b = c;
}

char *my_revstr(char *str)
{
    int debut = 0;
    int fin = my_strlen(str) - 1;

    while (debut < fin) {
        my_swapchar(&str[debut], &str[fin]);
        debut = debut + 1;
        fin = fin - 1;
    }
    return (str);
}
