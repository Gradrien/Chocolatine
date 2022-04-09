/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-adrien.ricou
** File description:
** solving
*/

#include "dante.h"

static int check_cardinal(solv_t *solver, int i, int j)
{
    if (solver->tab_int[i][j] == solver->nb) {
        if (j > 0 && solver->tab_int[i][j - 1] == 0)
            solver->tab_int[i][j - 1] = solver->nb + 1;
        if ((j < solver->x - 1) && solver->tab_int[i][j + 1] == 0)
            solver->tab_int[i][j + 1] = solver->nb + 1;
        if ((i < solver->y - 1) && solver->tab_int[i + 1][j] == 0)
            solver->tab_int[i + 1][j] = solver->nb + 1;
        if (i > 0 && solver->tab_int[i - 1][j] == 0)
            solver->tab_int[i - 1][j] = solver->nb + 1;
    } else
        solver->nb_solution += 1;
    return EXIT_SUCCESS;
}

static int incremention(solv_t *solver, int i)
{
    for (int j = 0; j < solver->x; j++) {
        check_cardinal(solver, i, j);
        if (solver->nb_solution >= 2000000000)
            break;
    }
    return EXIT_SUCCESS;
}

int **modify_map(solv_t *solver)
{
    if (solver->tab_int[0][1] == 0)
        solver->tab_int[0][1] = 1;
    if (solver->y != 1) {
        if (solver->tab_int[1][0] == 0)
            solver->tab_int[1][0] = 1;
    }
    for (int i = 0; i < solver->y; i++) {
        incremention(solver, i);
    }
    solver->nb += 1;
    return solver->tab_int;
}

int print_solv(solv_t *solver)
{
    for (int i = 0; i < solver->y; i++) {
        printf("%s", solver->maze[i]);
        if (i < solver->y - 1)
            printf("\n");
    }
    return 0;
}

int algo_solv(char *path)
{
    solv_t *solver = NULL;

    solver = init_solving(path);
    if (!solver)
        return 84;
    while (solver->tab_int[solver->y - 1][solver->x - 1] == 0) {
        solver->tab_int = modify_map(solver);
        if (solver->nb_solution >= 2000000000)
            break;
    }
    solver->tab_int[0][0] = 0;
    if (solver->nb_solution <= 2000000000) {
        find_path(solver);
        print_solv(solver);
        return EXIT_SUCCESS;
    } else
        printf("no solution found");
    return EPITECH_ERROR;
}
