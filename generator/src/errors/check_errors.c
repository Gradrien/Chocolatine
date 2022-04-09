/*
** EPITECH PROJECT, 2022
** check_errors
** File description:
** check_errors
*/

#include "dante.h"
#include <sys/stat.h>
#include <fcntl.h>

int display_help(void)
{
    int fd = 0;
    char buffer[1];

    fd = open("./ressources/help.txt", O_RDONLY);
    if (fd == -1) {
        my_printf("generator: Failed to open help file.\n");
        close(fd);
        exit(EPITECH_ERROR);
    }
    while (read(fd, buffer, 1) != '\0')
        write(1, buffer, 1);
    close(fd);
    exit(EXIT_SUCCESS);
}

int check_arguments(int ac, char **av)
{
    if (ac == 2 && !my_strcmp(av[1], "-h"))
        return display_help();
    if (ac == 4 && my_strcmp(av[3], "perfect")) {
        my_printf("generator: Invalid option. Try generator/generator -h.\n");
        exit(EPITECH_ERROR);
    } else if ((ac < 3 || ac > 4)
    || !my_str_isnum(av[1]) || !my_str_isnum(av[2])) {
        my_printf("generator: Invalid use. Try generator/generator -h.\n");
        exit(EPITECH_ERROR);
    }
    return EXIT_SUCCESS;
}
