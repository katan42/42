# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/28 16:53:02 by katan             #+#    #+#              #
#    Updated: 2024/11/30 16:30:00 by katan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMES = client server
LIBFT_DIR = ./libft
FT_PRINTF_DIR = ./ft_printf

SRC_CLIENT = ./src/client.c
SRC_SERVER = ./src/server.c

OBJ_CLIENT =$(SRC_CLIENT:.c=.o)
OBJ_SERVER =$(SRC_SERVER:.c=.o)

CC = cc
INCLUDE = -I./include/ -I$(LIBFT_DIR) -I$(FT_PRINTF_DIR)
CFLAGS = -Wall -Wextra -Werror $(INCLUDE)

all: $(NAMES)

client: $(OBJ_CLIENT) $(LIBFT_DIR)/libft.a $(FT_PRINTF_DIR)/libftprintf.a
	    $(CC) $(OBJ_CLIENT) $(LIBFT_DIR)/libft.a $(FT_PRINTF_DIR)/libftprintf.a -o client

server: $(OBJ_SERVER) $(LIBFT_DIR)/libft.a $(FT_PRINTF_DIR)/libftprintf.a
	    $(CC) $(OBJ_SERVER) $(LIBFT_DIR)/libft.a $(FT_PRINTF_DIR)/libftprintf.a -o server

$(LIBFT_DIR)/libft.a:
		$(MAKE) -C $(LIBFT_DIR)

$(FT_PRINTF_DIR)/libftprintf.a:
		$(MAKE) -C $(FT_PRINTF_DIR)


%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJ_CLIENT) $(OBJ_SERVER)
		$(MAKE) -C $(LIBFT_DIR) clean
		$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
		rm -f $(NAMES)
		$(MAKE) -C $(FT_PRINTF_DIR) fclean
		$(MAKE) -C $(FT_PRINTF_DIR) clean

re: fclean all

.PHONY: all clean fclean re
