/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** prototypes of all your functions
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

#ifndef MY_H
    #define MY_H

    void my_putchar(char c);
    int my_put_nbr(int nb);
    int my_putstr(char const *str);
    int my_strlen(char const *str);
    int my_getnbr(char const *str);
    int my_printf(char *str, ...);
    void my_put_nbr_base_uns(unsigned long nb, char const *base);
    int my_put_nbr_base(int nb, char const *base);
    void my_put_nbr_uns(unsigned int nb);
    void my_put_nbr_ll(long long nb);
    void my_put_nbr_l(long nb);
    void my_str_isnotprintable(char const *str);
    void find_flags(char c, va_list ap);
    void find_flags1(char c, va_list ap);
    void find_flags2(char c, va_list ap);
    void find_flags3(char c, va_list ap);

#endif /* MY_H */
