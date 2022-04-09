/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-adrien.ricou
** File description:
** init
*/

#include "dante.h"

static int replace_int(solv_t *solver, int i, int j)
{
    if (solver->maze[i][j] == '*')
        solver->tab_int[i][j] = 0;
    if (solver->maze[i][j] == 'X')
        solver->tab_int[i][j] = -1;
    return EXIT_SUCCESS;
}

static int **init_tab_int(solv_t *solver)
{
    solver->tab_int = malloc(sizeof(int *) * (solver->y + 1));
    for (int i = 0; i < solver->y; i++) {
        solver->tab_int[i] = malloc(sizeof(int) * (solver->x + 1));
        for (int j = 0; j < solver->x; j++) {
            replace_int(solver, i, j);
        }
    }
    return solver->tab_int;
}

solv_t *init_solving(char *path)
{
    solv_t *solver = malloc(sizeof(solv_t));

    if (!solver)
        return NULL;
    solver->buffer = read_the_buffer(path);
    solver->maze = str_to_tab_path(solver->buffer, '\n');
    if (!solver->maze)
        return NULL;
    solver->y = get_line(solver);
    solver->x = get_col(solver);
    solver->tab_int = init_tab_int(solver);
    solver->nb = 1;
    solver->act = 0;
    solver->act_x = 0;
    solver->act_y = 0;
    solver->nb_solution = 0;
    return solver;
}
