/*
** EPITECH PROJECT, 2022
** B-PSU-200-BDX-2-1-mysokoban-adrien.ricou
** File description:
** tests_player_pos
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "dante.h"

Test(generator_dante, disp_help) {
    int ac = 2;
    char *av[] = {"./generator/generator", "-h"};
    int ret = check_arguments(ac, av);

    cr_assert_eq(ret, 0);
}

Test(generator_dante, error_perfect_arg, .exit_code = 84) {
    int ac = 4;
    char *av[] = {"./generator/generator", "10", "10", "zebi"};
    int ret = check_arguments(ac, av);

    cr_assert_eq(ret, 84);
}

Test(generator_dante, too_few_args, .exit_code = 84) {
    int ac = 2;
    char *av[] = {"./generator/generator", "10"};
    int ret = check_arguments(ac, av);

    cr_assert_eq(ret, 84);
}

Test(generator_dante, too_many_args, .exit_code = 84) {
    int ac = 5;
    char *av[] = {"./generator/generator", "10", "10", "perfect", "zebi"};
    int ret = check_arguments(ac, av);

    cr_assert_eq(ret, 84);
}

Test(generator_dante, x_not_num, .exit_code = 84) {
    int ac = 4;
    char *av[] = {"./generator/generator", "zebi", "10", "perfect"};
    int ret = check_arguments(ac, av);

    cr_assert_eq(ret, 84);
}

Test(generator_dante, y_not_num, .exit_code = 84) {
    int ac = 4;
    char *av[] = {"./generator/generator", "10", "zebi", "perfect"};
    int ret = check_arguments(ac, av);

    cr_assert_eq(ret, 84);
}

Test(generator_dante, perfect) {
    int ac = 4;
    char *av[] = {"./generator/generator", "10", "10", "perfect"};
    int ret = check_arguments(ac, av);

    cr_assert_eq(ret, 0);
}
