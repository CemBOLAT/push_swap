NAME = push_swap.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = apply.c \
		cases.c \
		check_args.c \
		exit.c \
		fill_stack.c \
		ft_rotate_type.c \
		lst_utils.c \
		lst_utils_2.c \
		push.c \
		push_swap.c \
		reverse_rotate.c \
		rotate.c \
		short_sort.c \
		sort.c \
		swap.c

OBJ = apply.o \
		cases.o \
		check_args.o \
		exit.o \
		fill_stack.o \
		ft_rotate_type.o \
		lst_utils.o \
		lst_utils_2.o \
		push.o \
		push_swap.o \
		reverse_rotate.o \
		rotate.o \
		short_sort.o \
		sort.o \
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
