/*
** EPITECH PROJECT, 2022
** check_errors
** File description:
** check_errors
*/

#include "dante.h"
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>

static int open_file(char *filename)
{
    struct stat st;
    int fd = open(filename, O_RDONLY);
    int perm = access(filename, W_OK);
    char *buf;

    if (fd < 0 || perm != 0) {
        printf("File cannot be opened or executed: %s\n", filename);
        close(fd);
        exit(EPITECH_ERROR);
    }
    stat(filename, &st);
    buf = malloc(sizeof(char) * st.st_size + 1);
    if (buf == NULL)
        return EPITECH_ERROR;
    read(fd, buf, st.st_size);
    buf[st.st_size] = '\0';
    if (my_strlen(buf) < 1 || !S_ISREG(st.st_mode))
        return EPITECH_ERROR;
    return EXIT_SUCCESS;
}

static int display_help_solver(void)
{
    int fd = 0;
    char buffer[1];

    fd = open("./ressources/help.txt", O_RDONLY);
    if (fd == -1) {
        my_printf("solver: Failed to open help file.\n");
        close(fd);
        exit(EPITECH_ERROR);
    }
    while (read(fd, buffer, 1) != '\0')
        write(1, buffer, 1);
    close(fd);
    exit(EXIT_SUCCESS);
}

int check_char(char *path)
{
    int i = 0;
    char *buffer = read_the_buffer(path);

    for (; buffer[i] != '\0'; i++) {
        if (buffer[i] != '*' && buffer[i] != 'X'
        && buffer[i] != '\0' && buffer[i] != '\n') {
            my_printf("solver: Invalid map. Try solver -h.\n");
            exit(EPITECH_ERROR);
        }
    }
    if (i == 1) {
        printf("o");
        exit(EXIT_SUCCESS);
    }
    return EXIT_SUCCESS;
}

int check_arguments(int ac, char **av)
{
    if (ac == 2 && !my_strcmp(av[1], "-h")) {
        return display_help_solver();
    } else if (ac != 2 || open_file(av[1]) == 84) {
        my_printf("solver: Invalid use. Try solver -h.\n");
        return EPITECH_ERROR;
    }
    check_char(av[1]);
    return EXIT_SUCCESS;
}
