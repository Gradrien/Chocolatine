##
## EPITECH PROJECT, 2021
## Makefileanalysis, sorting and frequency tree
## File description:
## Makefile
##

SRC	=	src/init.c \
		src/solv.c \
		src/find_path.c \
		src/get_info_buffer.c \
		src/errors/check_errors.c

SRC_MAIN	=	src/main.c

SRC_TEST		=	tests/tests_error.c \
					tests/tests_algo.c

OBJ	=	$(SRC:.c=.o)

OBJ_MAIN	=	$(SRC_MAIN:.c=.o)

NAME	=	solver

CFLAGS	=	-Wall

CPPFLAGS	=	-I ../include

LDFLAGS	=	-L ../lib -lmy

all:	$(NAME)

$(NAME):	$(OBJ) $(OBJ_MAIN)
	make -C ../lib/
	$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS)

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

.PHONY	=	all re fclean clean tests_run
