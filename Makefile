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
	./src/push_swap.c ./algo/radix.c ./algo/simple.c \
	./utils/utils.c ./utils/utils2.c ./src/check.c \
	./steps/push.c ./steps/reverse_rotate.c \
	./steps/rotate.c ./steps/swap.c
OBJECTS = $(patsubst %.c,%.o,$(notdir $(SOURCES)))

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS) libftprintf.a
	$(AR) -r $@ $(OBJECTS) ./lib/ft_printf/*.o ./lib/ft_printf/libft/*.o

libftprintf.a:
	make -C ./lib/ft_printf

%.o: $(SOURCES)
	$(CC) $(CFLAGS) -c $(filter %/$*.c,$(SOURCES)) -o $@

clean: 
	rm -f $(OBJECTS)
	make clean -C ./lib/ft_printf

fclean: clean
	rm -f $(NAME)
	rm -f ./a.out
	make fclean -C ./lib/ft_printf

re: fclean all

.PHONY: all bonus clean fclean re