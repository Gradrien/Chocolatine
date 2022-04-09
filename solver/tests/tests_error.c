/*
** EPITECH PROJECT, 2022
** B-PSU-200-BDX-2-1-mysokoban-adrien.ricou
** File description:
** tests_player_pos
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "dante.h"

Test(solver_dante, disp_help) {
    int ac = 2;
    char *av[] = {"./solver/solver", "-h"};
    int ret = check_arguments(ac, av);

    cr_assert_eq(ret, 0);
}

Test(solver_dante, error_no_file, .exit_code = 84) {
    int ac = 2;
    char *av[] = {"./solver/solver", "ressources/nofile.txt"};
    int ret = check_arguments(ac, av);

    cr_assert_eq(ret, 84);
}

Test(solver_dante, no_error_file) {
    int ac = 2;
    char *av[] = {"./solver/solver", "ressources/maze.txt"};
    int ret = check_arguments(ac, av);

    cr_assert_eq(ret, 0);
}

Test(solver_dante, cannot_open_map, .exit_code = 84) {
    int ac = 2;
    char *av[] = {"./solver/solver", "ressources/map"};
    int ret = check_arguments(ac, av);

    cr_assert_eq(ret, 84);
}

Test(solver_dante, no_error_char) {
    int ac = 2;
    char *av[] = {"./solver/solver", "ressources/maze.txt"};
    int ret = check_char(av[1]);

    cr_assert_eq(ret, 0);
}

Test(solver_dante, error_char, .exit_code = 84) {
    int ac = 2;
    char *av[] = {"./solver/solver", "ressources/invalid_map"};
    int ret = check_char(av[1]);

    cr_assert_eq(ret, 84);
}

Test(solver_dante, one_char) {
    int ac = 2;
    char *av[] = {"./solver/solver", "ressources/one_char"};
    int ret = check_char(av[1]);

    cr_assert_eq(ret, 0);
}
