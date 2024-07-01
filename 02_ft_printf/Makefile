NAME = libftprintf.a

SRC = ft_printchar.c ft_printstr.c ft_print_ptr.c ft_print_nbr.c ft_print_unsigned_nbr.c\
	  ft_print_hex.c ft_print.c

all: $(NAME)	  

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

%.o: %.c
		cc -Wall -Wextra -Werror -c $< -o $@
	
clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
