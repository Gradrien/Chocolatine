/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-adrien.ricou
** File description:
** find_path
*/

#include "dante.h"

static int print_path_y(solv_t *solver)
{
    if (solver->act_y > 0 && solver->tab_int[solver->act_y - 1][solver->act_x]
    == solver->act - 1) {
        solver->maze[solver->act_y][solver->act_x] = 'o';
        solver->act_y -= 1;
        solver->act -= 1;
        return EXIT_SUCCESS;
    }
    if (solver->act_y < solver->y - 1 &&
    solver->tab_int[solver->act_y + 1][solver->act_x] == solver->act - 1) {
        solver->maze[solver->act_y][solver->act_x] = 'o';
        solver->act_y += 1;
        solver->act -= 1;
        return EXIT_SUCCESS;
    }
    return EXIT_SUCCESS;
}

static int print_path_x(solv_t *solver)
{
    if (solver->x > 0 &&
    solver->act - 1 == solver->tab_int[solver->act_y][solver->act_x - 1]) {
        solver->maze[solver->act_y][solver->act_x] = 'o';
        solver->act_x -= 1;
        solver->act -= 1;
        return EXIT_SUCCESS;
    }
    if (solver->act_x - 1 < solver->x &&
    solver->tab_int[solver->act_y][solver->act_x + 1] == solver->act - 1) {
        solver->maze[solver->act_y][solver->act_x] = 'o';
        solver->act_x += 1;
        solver->act -= 1;
        return EXIT_SUCCESS;
    }
    return EXIT_SUCCESS;
}

int find_path(solv_t *solver)
{
    if (!solver)
        return 84;
    solver->act_x = solver->x - 1;
    solver->act_y = solver->y - 1;
    solver->act = solver->tab_int[solver->act_y][solver->act_x];
    while (solver->act > 0) {
        if (solver->y == 0)
            return 0;
        print_path_y(solver);
        print_path_x(solver);
    }
    solver->maze[0][0] = 'o';
    return EXIT_SUCCESS;
}
