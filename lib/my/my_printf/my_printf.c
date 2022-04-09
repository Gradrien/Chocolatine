/*
** EPITECH PROJECT, 2021
** printf
** File description:
** displays the flags
*/

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "my.h"

void find_flags3(char c, va_list ap)
{
    if (c == 'b')
        my_put_nbr_base_uns(va_arg(ap, unsigned int), "01");
    if (c == 'S')
        my_str_isnotprintable(va_arg(ap, char *));
    if (c == 'l' && c + 1 == 'l')
        my_put_nbr_ll(va_arg(ap, long long));
    if (c == 'l')
        my_put_nbr_l(va_arg(ap, long));
    if ((c == 'l' && c + 1 == 'i') || (c == 'l' && c + 1 == 'd'))
        my_put_nbr_l(va_arg(ap, long));
}

void find_flags2(char c, va_list ap)
{
    if (c == 'c')
        my_putchar(va_arg(ap, int));
    if (c == 'i')
        my_put_nbr(va_arg(ap, int));
    if (c == 'o')
        my_put_nbr_base_uns(va_arg(ap, unsigned long), "01234567");
    if (c == 'p') {
        my_putchar('0');
        my_putchar('x');
        my_put_nbr_base_uns(va_arg(ap, unsigned long), "0123456789ABCDEF");
    }
    if (c == '%')
        my_putchar('%');
}

void find_flags1(char c, va_list ap)
{
    if (c == 'd')
        my_put_nbr(va_arg(ap, int));
    if (c == 's')
        my_putstr(va_arg(ap, char *));
    if (c == 'u')
        my_put_nbr_uns(va_arg(ap, unsigned int));
    if (c == 'x')
        my_put_nbr_base_uns(va_arg(ap, unsigned long), "0123456789abcdef");
    if (c == 'X')
        my_put_nbr_base_uns(va_arg(ap, unsigned long), "0123456789ABCDEF");
}

int flag_spe(char *str, va_list ap, int index)
{
    if (str[index] == ' ') {
        while (str[index] == ' ')
            index = index + 1;
    }
    return index;
}

int my_printf(char *str, ...)
{
    va_list ap;
    int index = 0;

    if (str == NULL)
        return 84;
    va_start(ap, str);
    while (str[index] != '\0') {
        if (str[index] != '%') {
            my_putchar(str[index]);
        } else if (str[index] == '%') {
            index = index + 1;
            index = flag_spe(str, ap, index);
            find_flags(str[index], ap);
        }
        index = index + 1;
    }
    va_end(ap);
    return (0);
}
