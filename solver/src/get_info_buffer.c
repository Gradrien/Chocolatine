/*
** EPITECH PROJECT, 2022
** B-CPE-200-BDX-2-1-dante-adrien.ricou
** File description:
** get_info_buffer
*/

#include "dante.h"

char *read_the_buffer(char *path)
{
    char *buffer = NULL;
    int open_file = 0;
    int j = 0;
    struct stat st;

    stat(path, &st);
    open_file = open(path, O_RDONLY);
    if (open_file == -1) {
        close(open_file);
        return NULL;
    }
    buffer = malloc(sizeof(char) * (st.st_size + 1));
    buffer[st.st_size] = '\0';
    j = read(open_file, buffer, st.st_size);
    if (j == -1) {
        close(open_file);
        return NULL;
    }
    close(open_file);
    return (buffer);
}

int get_col(solv_t *solver)
{
    int i = 0;

    for (; solver->maze[0][i] != '\0'; i++);
    return i;
}

int get_line(solv_t *solver)
{
    int j = 0;

    for (int i = 0; solver->buffer[i] != '\0'; i++) {
        if (solver->buffer[i] == '\n' && solver->buffer[i + 1] != '\n'
        && solver->buffer[i + 1] != '\0')
            ++j;
    }
    return j + 1;
}
