# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 11:48:48 by aybiouss          #+#    #+#              #
#    Updated: 2022/12/16 13:49:49 by aybiouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
OPTION = -o
SRCS = ./check/
OBJS = $(SRCS:.c=.o)

all : $(NAME)

