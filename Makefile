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

CHECKER = checker

PUSH_SWAP = push_swap

LIBRARY = push_swapft.a

SOURCES = shared_srcs/ft_stack_man.c shared_srcs/ft_stack_man2.c \
		  shared_srcs/ft_arg_man.c shared_srcs/ft_error_handle.c \
		  shared_srcs/ft_both_stacks_man.c shared_srcs/ft_stack_A_man.c \
		  shared_srcs/ft_stack_B_man.c push_swap_srcs/ft_sort_algo.c

OBJECTS = ft_stack_man.o ft_stack_man2.o ft_arg_man.o ft_error_handle.o ft_both_stacks_man.o \
		  ft_stack_A_man.o ft_stack_B_man.o ft_sort_algo.o

CC = gcc

flags = -Wall -Wextra -Werror

all: $(PUSH_SWAP)

$(PUSH_SWAP): $(CHECKER)
	$(CC) $(flags) -o push_swap push_swap_srcs/push_swap.c $(LIBRARY)

$(CHECKER): $(LIBRARY)
	$(CC) $(flags) -o checker checker_srcs/checker.c $(LIBRARY)

$(LIBRARY): $(OBJECTS)
	ar rc $(LIBRARY) $(OBJECTS) libft/*.o
	ranlib $(LIBRARY)

$(OBJECTS): $(SOURCES)
	$(CC) $(flags) -c $(SOURCES)
	make -C libft/

re: fclean all
	make -C libft/ re

clean:
	rm -rf $(OBJECTS) $(LIBRARY) libft/libft.a .*.swp
	make -C libft/ clean

fclean: clean
	rm -rf $(CHECKER) $(PUSH_SWAP) a.out program main.c
	make -C libft/ fclean

N:
	norminette -R CheckForbiddenSourceHeader

p:
	$(CC) $(flags) -o program main.c $(LIBRARY)
