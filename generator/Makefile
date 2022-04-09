##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	=	src/algo.c	\
		src/errors/check_errors.c	\
		src/generation.c

OBJ	=	$(SRC:.c=.o)

SRC_MAIN	=	src/main.c

SRC_TEST		=	tests/tests_error.c \
					tests/tests_algo.c

OBJ_MAIN	=	$(SRC_MAIN:.c=.o)

NAME	=	generator

LIBMY	=	../lib/libmy.a

CFLAGS	=	-W -Wall -Wextra -Wpedantic

CPPFLAGS	=	-I./../include

CC	=	gcc

LDFLAGS	=	-L./../lib

LDLIBS	=	-lmy

all: $(NAME)
.PHONY:	all

$(NAME): $(OBJ) $(OBJ_MAIN) $(LIBMY)
	make -C ../lib/
	$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN) $(LDFLAGS) $(LDLIBS)

$(LIBMY):
	make -C ../lib

debug: fclean
debug: CFLAGS += -g
debug: all
.PHONY:	debug

clean:
	rm -f $(OBJ)
	rm -f $(OBJ_MAIN)
	rm -f unit_tests
	rm -f *gcda
	rm -f *gcno

fclean:	clean
	rm -f $(NAME)

re:	fclean all

tests_run: $(NAME) clean ##Launch criterion tests
	$(CC) -o unit_tests $(SRC) $(SRC_TEST) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS) \
	--coverage -lcriterion

.PHONY:	all re fclean clean tests_run
