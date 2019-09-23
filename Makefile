# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jphasha <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/16 14:34:47 by jphasha           #+#    #+#              #
#    Updated: 2019/09/23 11:39:16 by jphasha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swapft.a

SOURCES = checker_srcs/checker.c push_swap_srcs/push_swap.c shared_srcs/ft_stack_man.c \
		  shared_srcs/ft_stack_man2.c shared_srcs/ft_arg_man.c shared_srcs/ft_error_handle.c \

OBJECTS = checker.o push_swap.o ft_stack_man.o ft_stack_man2.o ft_arg_man.o ft_error_handle.o \

CC = gcc

flags = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS) libft/*.o
	ranlib $(NAME)

$(OBJECTS): $(SOURCES)
	$(CC) $(flags) -c $(SOURCES)
	make -C libft/

re: fclean all
	make -C libft/ re

clean:
	rm -rf $(OBJECTS) .*.swp
	make -C libft/ clean

fclean: clean
	rm -rf $(NAME) checker push_swap a.out program
	make -C libft/ fclean

N:
	norminette -R CheckForbiddenSourceHeader

c:
	$(CC) $(flags) -o checker checker_srcs/checker.c $(NAME)
	$(CC) $(flags) -o push_swap push_swap_srcs/push_swap.c $(NAME)

p:
	$(CC) $(flags) -o program main.c $(NAME)
