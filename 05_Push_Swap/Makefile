NAME = push_swap
LIBFT_DIR = Libft

SRC = *.c

OBJ = $(SRC:.c=.o)

CC = cc
INCLUDE = -I. -I$(LIBFT_DIR)
CFLAGS = -Wall -Wextra -Werror $(INCLUDE)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT_DIR)/libft.a
	    $(CC) $(NAME) $(OBJ) $(LIBFT_DIR)/libft.a

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
