# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 11:48:48 by aybiouss          #+#    #+#              #
#    Updated: 2022/12/17 15:55:01 by aybiouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
OPTION = -o
OPERATIONS = push_a.c  push_b.c  reverse_rotate_a.c  reverse_rotate_b.c  reverse_rr.c \
	rotate_a.c  rotate_b.c  rr.c  ss.c  swap_a.c  swap_b.c
MOVERS = pop_bottom.c  pop_elem.c  push_bottom_elem.c  push_elem.c  stack_init.c creat_elem.c free_stack.c
FUNCTIONS = ft_atoi.c  ft_split.c  ft_strcmp.c ft_putstr.c
ALGO = a_to_b.c  b_to_a.c  fill_sort_array.c  sort_fifteen.c  sort.c  sort_over.c  sort_three.c
CHECK = check_it.c  is_duplicated.c  is_empty.c  is_integer.c  is_max_min.c  is_sorted.c
SRCS = $(addprefix ./check/,$(CHECK))\
	$(addprefix ./algorithm/,$(ALGO))\
	$(addprefix ./functions/,$(FUNCTIONS))\
	$(addprefix ./movers/,$(MOVERS))\
	$(addprefix ./operations/,$(OPERATIONS))\
	push_swap.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)
$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) $(OPTION) $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all