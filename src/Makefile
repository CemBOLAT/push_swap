NAME = push_swap.a

CC = gcc

CFLAGS = 

SRC = *.c

OBJ = $(SRC:.c=.o)

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
