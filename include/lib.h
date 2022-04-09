/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** prototypes of all your functions
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/sysmacros.h>
#include <errno.h>
#include <time.h>
#include <grp.h>
#include <pwd.h>
#include <stdbool.h>

#ifndef MY_H
    #define MY_H
    #define _GNU_SOURCE

typedef struct node_s {
    char *path;
    struct node_s *next;
    struct node_s *prev;
} node_t;

typedef struct list_s {
    node_t *head;
    int length;
    int i;
    int pos;
} list_t;

    char *my_strcat_real(char *dest, char const *src);
    char *my_strdup(char const *src);
    char *my_strndup(char const *src, int nb);
    int my_str_isalphanum(char const *str);
    int my_show_word_array(char * const *tab);
    void my_putchar(char c);
    int my_isneg(int nb);
    void my_put_nbr(int nb);
    void my_swap(int *a, int *b);
    int my_putstr(char const *str);
    int my_strlen(char const *str);
    int my_getnbr(char const *str);
    void my_sort_int_array(int *tab, int size);
    int my_compute_power_rec(int nb, int power);
    int my_compute_square_root(int nb);
    int my_compute_factorial_it(int nb);
    int my_compute_factorial_rec(int nb);
    int my_is_prime(int nb);
    char *my_strcpy(char *dest, char const *src);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_revstr(char *str);
    char *my_strstr(char *str, char const *to_find);
    int my_strcmp(char const *s1, char const *s2);
    int my_strncmp(char const *s1, char const *s2, int n);
    char *my_strupcase(char *str);
    char *my_strlowcase(char *str);
    char *my_strcapitalize(char *str);
    int my_str_isalpha(char const *str);
    int my_str_isnum(char const *str);
    int my_str_islower(char const *str);
    int my_str_isupper(char const *str);
    int my_str_isprintable(char const *str);
    int my_showstr(char const *str);
    int my_showmem(char const *str, int size);
    char *my_strcat(char *dest, char const *src);
    char *my_strncat(char *dest, char const *src, int nb);
    void my_swapchar(char *a, char *b);
    int my_put_nbr_negatif(int n);

    int my_printf(char *str, ...);
    void my_put_nbr_base_uns(unsigned long nb, char const *base);
    int my_put_nbr_base(int nb, char const *base);
    void my_put_nbr_uns(unsigned int nb);
    void my_put_nbr_ll(long long nb);
    void my_put_nbr_l(long nb);
    void my_str_isnotprintable(char const *str);

    void find_flags(char c, va_list ap);
    void find_flags1(char c, va_list ap);
    void find_flags2(char c, va_list ap);
    void find_flags3(char c, va_list ap);
    void create_node(char **env, node_t *node, list_t **list);
    node_t *list_create(list_t **list, char **env);
    void display(list_t *list, char **env);
    void delete_list(list_t *list);
    node_t *fill_list(char **env, list_t **list);

    char **str_to_tab_path(const char *str, const char sep);
    int is_alphanum_array(const char *str, const char sep, int index);

#endif /* MY_H */
