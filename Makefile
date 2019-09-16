# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jphasha <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/16 14:34:47 by jphasha           #+#    #+#              #
#    Updated: 2019/09/16 15:19:15 by jphasha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swapft.a

SOURCES = 

OBJECTS = 

CC = gcc

flags = -Wall -Wextra -Werror

$(NAME): $(OBJECTS)

$(OBJECTS): $(SOURCES)
	$(CC) $(flags) -c $(SOURCES)

re: fclean all
	make -C libft/ re

all: $(NAME)
	make -C libft/ all

clean:
	rm -rf $(OBJECTS) .*.swp
	make -C libft/ clean

fclean: clean
	rm -rf $(NAME)
	make -C libft/ fclean

N: $(SOURCES)
	norminette -R CheckForbiddenSourceHeader

c: $(SOURCES) $(NAME)
	$(CC) $(flags) -o checker checker.c $(NAME)
	$(CC) $(flags) -o push_swap push_swap.c $(NAME)

p: $(SOURCES) $(NAME)
	$(CC) $(flags) -o program main.c $(NAME)
