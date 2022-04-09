/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-adrien.ricou
** File description:
** algo
*/

#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "dante.h"

static int put_walls_first_raw_cols(maze_t *maze, int i, int j)
{
    if (i == 0 || j == 0)
        maze->tab[i][j] = '*';
    return EXIT_SUCCESS;
}

maze_t *init(char **argv)
{
    maze_t *maze = malloc(sizeof(maze_t));
    int i = 0;

    if (maze == NULL)
        return NULL;
    maze->height = my_getnbr(argv[2]);
    maze->width = my_getnbr(argv[1]);
    maze->size = (maze->height * maze->width);
    maze->tab = malloc(sizeof(char *) * (maze->height + 1));
    for (; i < maze->height; i++) {
        maze->tab[i] = malloc(sizeof(char) * (maze->width + 1));
        memset(maze->tab[i], 'X', maze->width * sizeof(char));
        put_walls_first_raw_cols(maze, i, 0);
        maze->tab[i][maze->width] = '\0';
    }
    memset(maze->tab[0], '*', maze->width * sizeof(char));
    maze->tab[i] = NULL;
    return maze;
}

int print_tab(maze_t *maze)
{
    for (int i = 0; i < maze->height - 1; i++) {
        printf("%s\n", maze->tab[i]);
    }
    printf("%s", maze->tab[maze->height - 1]);
    return EXIT_SUCCESS;
}

int perfect_algo(char **argv)
{
    maze_t *maze = NULL;

    maze = init(argv);
    maze->tab = generator(maze);
    print_tab(maze);
    return EXIT_SUCCESS;
}

int imperfect_algo(char **argv)
{
    maze_t *maze = NULL;

    maze = init(argv);
    maze->tab = generator(maze);
    for (int i = 0; i < maze->height; i++) {
        if (maze->width != 2)
            maze->tab[i][2] = '*';
    }
    print_tab(maze);
    return EXIT_SUCCESS;
}
