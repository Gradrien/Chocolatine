##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

NAME_SOLVER	=	solver

NAME_GENERATOR	=	generator

all: $(NAME_SOLVER) $(NAME_GENERATOR)

$(NAME_SOLVER):
	make -C lib/
	make -C solver
.PHONY:	$(NAME_SOLVER)

$(NAME_GENERATOR):
	make -C lib/
	make -C generator
.PHONY:	$(NAME_GENERATOR)

debug:
	make debug -C solver
	make debug -C generator
.PHONY:	debug

clean:
	make clean -C solver
	make clean -C generator
	make clean -C lib/
.PHONY:	clean

fclean:	clean
	make fclean -C solver
	make fclean -C generator
	make fclean -C lib/
.PHONY:	fclean

re: fclean
	make re -C solver
	make re -C generator
.PHONY:	re

dante: re
	./generator/generator $(H) $(W) > maze.txt
	./solver/solver maze.txt
.PHONY: dante

dante_perfect: re
	./generator/generator $(H) $(W) perfect > maze.txt
	./solver/solver maze.txt
.PHONY: dante

tests_run: re clean
	make tests_run -C generator
	make tests_run -C solver
	./generator/unit_tests
	./solver/unit_tests
