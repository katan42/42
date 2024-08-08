# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/08 12:03:17 by katan             #+#    #+#              #
#    Updated: 2024/08/08 12:03:29 by katan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printchar.c ft_printstr.c ft_print_ptr.c ft_print_nbr.c ft_print_unsigned_nbr.c\
	  ft_print_hex.c ft_print.c

all: $(NAME)	  

OBJ = $(SRC:.c=.o)

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
