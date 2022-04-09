/*
** EPITECH PROJECT, 2021
** all flags
** File description:
** all flags
*/

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "my.h"

void find_flags(char c, va_list ap)
{
    find_flags3(c, ap);
    find_flags2(c, ap);
    find_flags1(c, ap);
}
