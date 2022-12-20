# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 11:48:48 by aybiouss          #+#    #+#              #
#    Updated: 2022/12/20 20:49:40 by aybiouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BONUS = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror
OPTION = -o
OPERATIONS = push_a.c  push_b.c  reverse_rotate_a.c  reverse_rotate_b.c  reverse_rr.c \
	rotate_a.c  rotate_b.c  rr.c  ss.c  swap_a.c  swap_b.c
MOVERS = pop_bottom.c  pop_elem.c  push_bottom_elem.c  push_elem.c  stack_init.c creat_elem.c free_stack.c
FUNCTIONS = ft_strlen.c  ft_atoi.c  ft_split.c  ft_strcmp.c ft_putstr.c  errore.c  ft_putstr_error.c
ALGO = a_to_b.c  b_to_a.c  fill_sort_array.c  sort_fifteen.c  sort.c  sort_over.c  sort_three.c
CHECK = check_it.c  is_duplicated.c  is_empty.c  is_integer.c  is_top_min.c  is_sorted.c  is_purely_integer.c check_n.c 
SRCS = $(addprefix ./check/,$(CHECK))\
	$(addprefix ./algorithm/,$(ALGO))\
	$(addprefix ./functions/,$(FUNCTIONS))\
	$(addprefix ./movers/,$(MOVERS))\
	$(addprefix ./operations/,$(OPERATIONS))\
	push_swap.c
CHECKER = checker_bonus.c
GET_NEXT_LINE = get_next_line_bonus.c  get_next_line_utils_bonus.c
OPERATIONS_BONUS = push_a_bonus.c  push_b_bonus.c  reverse_rotate_a_bonus.c  reverse_rotate_b_bonus.c  reverse_rr_bonus.c \
	rotate_a_bonus.c  rotate_b_bonus.c  rr_bonus.c  ss_bonus.c  swap_a_bonus.c  swap_b_bonus.c
MOVERS_BONUS = pop_bottom_bonus.c  pop_elem_bonus.c  push_bottom_elem_bonus.c  push_elem_bonus.c  stack_init_bonus.c creat_elem_bonus.c free_stack_bonus.c
FUNCTIONS_BONUS = ft_strlen_bonus.c  ft_atoi_bonus.c  ft_split_bonus.c  ft_strncmp_bonus.c ft_putstr_bonus.c  errore_bonus.c  ft_putstr_error_bonus.c
CHECK_BONUS = check_it_bonus.c  is_duplicated_bonus.c  is_empty_bonus.c  is_integer_bonus.c  is_top_min_bonus.c  is_sorted_bonus.c  is_purely_integer_bonus.c check_n_bonus.c
SRCS_BONUS = $(addprefix ./bonus/check/,$(CHECK_BONUS))\
	$(addprefix ./bonus/get_next_line/,$(GET_NEXT_LINE))\
	$(addprefix ./bonus/functions/,$(FUNCTIONS_BONUS))\
	$(addprefix ./bonus/movers/,$(MOVERS_BONUS))\
	$(addprefix ./bonus/operations/,$(OPERATIONS_BONUS))\
	$(addprefix ./bonus/,$(CHECKER))
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
all : $(NAME)
$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) $(OPTION) $(NAME)

bonus : $(NAME_BONUS)
$(NAME_BONUS) : $(OBJS_BONUS)
	$(CC) $(CFLAGS) $(SRCS_BONUS) $(OPTION) $(NAME_BONUS)

clean :
	rm -rf $(OBJS) $(OBJS_BONUS)

fclean : clean
	rm -rf $(NAME) $(NAME_BONUS)

re : fclean all