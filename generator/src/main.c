/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include "dante.h"

int main(int argc, char **argv)
{
    check_arguments(argc, argv);
    srand(time(NULL));
    if (argc == 4 && !my_strcmp(argv[3], "perfect")) {
        return perfect_algo(argv);
    } else if (argc == 3) {
        return imperfect_algo(argv);
    }
}
