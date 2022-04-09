/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-adrien.ricou
** File description:
** tests_algo
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "dante.h"

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(generator_dante, return_print_maze) {
    maze_t *maze = malloc(sizeof(maze_t));

    maze->tab = str_to_tab_path("****\n*XX*\n*X**\n*X**\n**X*\n**X*\n*X**",
    '\n');
    maze->height = 6;
    maze->width = 4;
    maze->size = 24;
    cr_assert_eq(print_tab(maze), 0);
}

Test(generator_dante, do_algo) {
    maze_t *maze = malloc(sizeof(maze_t));
    char *av[] = { "./generator/generator", "6", "4"};

    cr_assert_eq(perfect_algo(av), 0);
    cr_assert_eq(imperfect_algo(av), 0);
}

Test(generator_dante, malloc_fail) {
    maze_t *maze = malloc(sizeof(maze_t));
    char *av[] = { "./generator/generator", "6", "4"};

    cr_assert_eq(perfect_algo(av), 0);
    cr_assert_eq(imperfect_algo(av), 0);
}
