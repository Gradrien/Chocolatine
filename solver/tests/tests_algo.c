/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-adrien.ricou
** File description:
** tests_algo
*/

#include <criterion/criterion.h>
#include "dante.h"

Test(solver_dante, do_algo) {
    char *av[] = { "./solver/solver", "ressources/maze.txt"};
    solv_t *solv = init_solving(av[1]);

    cr_assert_eq(find_path(solv), 0);
}

Test(solver_dante, malloc_fail) {
    char *av[] = { "./solver/solver", "ressources/maze.txt"};

    cr_assert_eq(algo_solv(av[1]), 0);
}
