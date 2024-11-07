# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/09 11:29:01 by aaleixo-          #+#    #+#              #
#    Updated: 2024/11/07 15:23:01 by aaleixo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SOURCES = \
	ft_printf.c ft_putnbr.c ft_ptr.c
OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS) libft.a
	$(AR) -r $@ $(OBJECTS)

libft.a:
	make -C ./Libft
	make bonus -C ./Libft

%.o: %.c
	$(CC) -c $(CFLAGS) $<

clean: 
	rm -f $(OBJECTS)
	make clean -C ./Libft

fclean: clean
	rm -f $(NAME)
	make fclean -C ./Libft

cleanlib:
	make clean -C ./Libft

re: fclean all

.PHONY: all libft.a clean fclean re