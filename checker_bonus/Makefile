NAME = checker.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = check_args.c \
		checker.c \
		exit.c \
		fill_stack.c \
		get_next_line.c \
		get_next_line_utils.c \
		push.c \
		reverse_rotate.c \
		rotate.c \
		swap.c

OBJ = check_args.o \
		checker.o \
		exit.o \
		fill_stack.o \
		get_next_line.o \
		get_next_line_utils.o \
		push.o \
		reverse_rotate.o \
		rotate.o \
		swap.o

all : $(NAME)

$(NAME) :
	@$(CC) $(CFLAGS) -c $(SRC)
	@ar -rcs $(NAME) $(OBJ)

re : fclean all

clean :
	@rm -rf $(OBJ) $(B_OBJ)

fclean : clean
	@rm -rf $(NAME)

.PHONY : all clean fclean re
