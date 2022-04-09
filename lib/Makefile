##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## create makefile
##

SRC	=	my/my_compute_power_rec.c	\
		my/my_compute_square_root.c	\
		my/my_compute_factorial_it.c	\
		my/my_compute_factorial_rec.c	\
		my/my_strdup.c	\
		my/my_show_word_array.c	\
		my/my_getnbr.c	\
		my/my_isneg.c	\
		my/my_is_prime.c	\
		my/my_putchar.c	\
		my/my_put_nbr.c	\
		my/my_putstr.c	\
		my/my_revstr.c	\
		my/is_alphanum_array.c \
		my/my_showstr.c	\
		my/my_strcapitalize.c	\
		my/my_strcat.c	\
		my/my_strcmp.c	\
		my/my_strcpy.c	\
		my/my_str_isalpha.c	\
		my/my_str_islower.c	\
		my/my_str_isnum.c	\
		my/my_str_isprintable.c	\
		my/my_str_isupper.c	\
		my/my_strlen.c	\
		my/my_strlowcase.c	\
		my/my_strncat.c	\
		my/my_strncmp.c	\
		my/my_strncpy.c	\
		my/my_strstr.c	\
		my/my_strupcase.c	\
		my/my_swap.c	\
		my/my_printf/my_printf.c	\
		my/my_printf/my_put_nbr_base.c	\
		my/my_printf/my_put_nbr_base_uns.c	\
		my/my_printf/my_put_nbr_uns.c	\
		my/my_printf/my_put_nbr_l.c	\
		my/my_printf/my_put_nbr_ll.c	\
		my/my_printf/my_str_isnotprintable.c	\
		my/my_printf/the_flags.c \
		my/str_to_tab_path.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	=	-I../include -L -lmy

all:	$(NAME) clean

$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)
