/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-adrien.ricou
** File description:
** generator
*/

#include "dante.h"

static int random_decision(maze_t *maze, int i, int j)
{
    int coin = rand() % 2;

    if (i == 0 || j == 0)
        return EXIT_SUCCESS;
    if (coin == 0) {
        maze->tab[i - 1][j] = '*';
    } else if (coin == 1) {
        maze->tab[i][j - 1] = '*';
    }
    maze->tab[i][j] = '*';
    return EXIT_SUCCESS;
}

static void check_last_line(maze_t *maze, int coin)
{
    if (maze->tab[maze->height - 2][maze->width - 1] == 'X' &&
    maze->tab[maze->height - 1][maze->width - 2] == 'X') {
        if (coin == 0) {
            maze->tab[maze->height - 1][maze->width - 2] = '*';
        } else if (coin == 1) {
            maze->tab[maze->height - 2][maze->width - 1] = '*';
        }
    }
}

char **generator(maze_t *maze)
{
    int coin = rand() % 2;

    for (int i = 0; i < maze->height; i += 2) {
        for (int j = 0; j < maze->width; j += 2) {
            random_decision(maze, i, j);
        }
    }
    maze->tab[maze->height - 1][maze->width - 1] = '*';
    if (maze->height != 1) {
        check_last_line(maze, coin);
    }
    return maze->tab;
}
