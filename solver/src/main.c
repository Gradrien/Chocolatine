/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "dante.h"

int main(int argc, char **argv)
{
    if (check_arguments(argc, argv) == EPITECH_ERROR)
        return EPITECH_ERROR;
    return algo_solv(argv[1]);
}
