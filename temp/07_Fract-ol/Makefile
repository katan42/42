# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/28 16:53:02 by katan             #+#    #+#              #
#    Updated: 2024/12/03 19:46:44 by katan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol
LIBFT_DIR = ./libft
FT_PRINTF_DIR = ./ft_printf
MLX_DIR = ./minilibx-linux

LIBS = -L/usr/X11/lib -L$(LIBFT_DIR) -L$(FT_PRINTF_DIR) -L$(MLX_DIR) -lft -lftprintf -lmlx -lXext -lX11 -lm

SRC = ./src/utils_ft_atof.c ./src/events.c ./src/main.c ./src/complex_math.c \
		./src/too_complex_fractals.c ./src/initialise_and_exit.c

OBJ =$(SRC:.c=.o)

CC = cc -g
INCLUDE = -I./include/ -I$(LIBFT_DIR) -I$(FT_PRINTF_DIR) -I$(MLX_DIR)
CFLAGS = -Wall -Wextra -Werror $(INCLUDE)

all: $(NAME)

$(NAME): $(LIBFT_DIR)/libft.a $(FT_PRINTF_DIR)/libftprintf.a $(MLX_DIR)/libmlx.a $(OBJ)
	    $(CC) $(OBJ) $(LIBS) -o $(NAME)

$(LIBFT_DIR)/libft.a:
		$(MAKE) -C $(LIBFT_DIR)

$(FT_PRINTF_DIR)/libftprintf.a:
		$(MAKE) -C $(FT_PRINTF_DIR)

$(MLX_DIR)/libmlx.a:
		$(MAKE) -C $(MLX_DIR)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJ)
		$(MAKE) -C $(LIBFT_DIR) clean
		$(MAKE) -C $(FT_PRINTF_DIR) clean
		$(MAKE) -C $(MLX_DIR) clean

fclean: clean
		rm -f $(NAME)
		$(MAKE) -C $(LIBFT_DIR) fclean
		$(MAKE) -C $(FT_PRINTF_DIR) fclean
		$(MAKE) -C $(MLX_DIR) clean

re: fclean all

.PHONY: all clean fclean re
