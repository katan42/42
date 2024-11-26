NAME = push_swap
LIBFT_DIR = ./Libft

SRC = ./src/initialise.c ./src/input_validation.c ./src/main.c ./src/normalise_values.c \
./src/sort_five.c ./src/sort_radix.c ./src/sort_three.c ./src/sort_utils_menu_checks.c \
./src/stack_operations_push.c ./src/stack_operations_reverse.c ./src/stack_operations_rotate.c \
./src/stack_operations_swap.c ./src/stack_utils_error_free.c

OBJ =$(SRC:.c=.o)

CC = cc
INCLUDE = -I./include/ -I$(LIBFT_DIR)
CFLAGS = -Wall -Wextra -Werror $(INCLUDE)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT_DIR)/libft.a
	    $(CC) $(OBJ) $(LIBFT_DIR)/libft.a -o $(NAME)

$(LIBFT_DIR)/libft.a:
		$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJ)
		$(MAKE) -C ./Libft/ clean

fclean: clean
		rm -f $(NAME)
		$(MAKE) -C ./Libft/ fclean

re: fclean all

.PHONY: all clean fclean re
