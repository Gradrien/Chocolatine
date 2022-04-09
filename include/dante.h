/*
** EPITECH PROJECT, 2022
** dante
** File description:
** dante
*/

#ifndef DANTE_H
    #define DANTE_H
    #define EPITECH_ERROR 84

    #include <fcntl.h>
    #include "lib.h"

typedef struct maze_s {
    int height;
    int width;
    int size;
    char **tab;
} maze_t;

typedef struct solv_s {
    int nb_solution;
    char *buffer;
    char **maze;
    int **tab_int;
    int y;
    int x;
    int nb;
    int act;
    int act_x;
    int act_y;
} solv_t;

    int check_arguments(int ac, char **av);
    int check_char(char *path);
    int display_help(void);
    /*Generator*/
    int perfect_algo(char **av);
    int imperfect_algo(char **argv);
    char **generator(maze_t *maze);
    int print_tab(maze_t *maze);
    /*Solver*/
    solv_t *init_solving(char *path);
    char *read_the_buffer(char *path);
    int get_col(solv_t *solver);
    int get_line(solv_t *solver);
    int algo_solv(char *path);
    int print_solv(solv_t *solver);
    int find_path(solv_t *solver);

#endif /* !DANTE_H_ */
