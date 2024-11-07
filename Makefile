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
	push_swap.c radix.c steps.c simple.c utils.c utils2.c check.c
OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS) libftprintf.a
	$(AR) -r $@ $(OBJECTS) ./ft_printf/*.o ./ft_printf/libft/*.o

libftprintf.a:
	make -C ./ft_printf

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean: 
	rm -f $(OBJECTS)
	make clean -C ./ft_printf

fclean: clean
	rm -f $(NAME)
	make fclean -C ./ft_printf

re: fclean all

.PHONY: all bonus clean fclean re