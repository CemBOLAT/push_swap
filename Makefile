NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
CC = gcc
LIBFT_PATH = ./libft/
LIBFT = libft.a
PS = push_swap.a

all : $(LIBFT) $(PS) $(NAME)

$(NAME) :
	@echo "\033[32mSOURCE IS COMPILING...\033[0m"
	@gcc $(CFLASGS) $(LIBFT) $(PS) -o $(NAME)
	@rm -rf *.a
	@echo "\033[32mCOMPILATION SUCCESS...\033[0m"

$(LIBFT) :
	@echo "\033[32mLIBFT COMPILING...\033[0m"
	@make bonus -C libft/
	@cp ./libft/libft.a .
	@echo "\033[32mLIBFT COMPILED\033[0m"

$(PS) :
	@echo "\033[32mPush SWAP COMPILING... \033[0m"
	@make -C src/
	@cp ./src/$(PS) .
	@echo "\033[32mPush SWAP COMPILED !\033[0m"

bonus : all
	@echo "\033[32mChecker COMPILING... \033[0m"
	@make -C libft/
	@cp ./libft/libft.a .
	@make -C checker_bonus/
	@cp ./checker_bonus/checker.a .
	@gcc $(CFLASGS) checker.a libft.a -o checker
	@rm -rf *.a
	@echo "\033[32m32mChecker COMPILED !\033[0m"

clean:
	@echo "\033[32mCLEANING...\033[0m"
	@rm -rf *.o
	@make clean -C libft/
	@make clean -C src/
	@make clean -C checker_bonus/
	@echo "\033[32mCLEANED ! \033[0m"

fclean: clean
	@echo "\033[32mARCHIVE FILES ARE CLEANING...\033[0m"
	@rm -rf $(NAME)
	@rm -rf checker
	@rm -rf $(LIBFT_PATH)/$(LIBFT)
	@rm -rf checker_bonus/checker.a
	@rm -rf src/push_swap.a
	@rm -rf *.a
	@echo "\033[32mARCHIVE FILES WERE CLEANED\033[0m"

re: clean fclean all

.PHONY : clean fclean all re bonus

