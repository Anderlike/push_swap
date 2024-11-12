# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/25 15:12:04 by aaleixo-          #+#    #+#              #
#    Updated: 2024/11/12 11:07:58 by aaleixo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SOURCES = \
	./src/push_swap.c ./algo/radix.c ./algo/simple.c \
	./utils/utils.c ./utils/utils2.c ./src/check.c \
	./steps/push.c ./steps/reverse_rotate.c \
	./steps/rotate.c ./steps/swap.c
OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS) libftprintf.a
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS) -L./lib/ft_printf -lftprintf

libftprintf.a:
	make -C ./lib/ft_printf

clean:
	rm -f $(OBJECTS)
	make clean -C ./lib/ft_printf

fclean: clean
	rm -f $(NAME)
	make fclean -C ./lib/ft_printf

re: fclean all

.PHONY: all clean fclean re