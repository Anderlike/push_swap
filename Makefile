# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/25 15:12:04 by aaleixo-          #+#    #+#              #
#    Updated: 2024/10/25 15:12:04 by aaleixo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
SOURCES = \
	push_swap.c \
OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS) ft_printf
	$(AR) -r $@ $(OBJECTS)

ft_printf:
	make -C ./ft_printf
	make -C ./ft_printf/Libft

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean: 
	rm -f $(OBJECTS) $(BOBJECTS)

fclean: clean
	rm -f $(NAME)
	make fclean -C ./ft_printf
	make fclean -C ./ft_printf/Libft

re: fclean all

.PHONY: all bonus clean fclean re