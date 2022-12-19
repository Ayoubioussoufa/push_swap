/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:39:27 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/19 17:14:46 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

typedef struct s_node {
    struct s_node *above;
    struct s_node *under;
    int content;
}   t_node;

typedef struct s_stack {
    t_node  *top;
    t_node  *bottom;
    int size;
}   t_stack;

// operations

void    swap_a(t_stack *a, int flag);
void    swap_b(t_stack *b, int flag);
void    ss(t_stack *a, t_stack *b);
void    push_a(t_stack *a, t_stack *b);
void    push_b(t_stack *a, t_stack *b);
void    rotate_a(t_stack *a, int flag);
void    rotate_b(t_stack *b, int flag);
void    rr(t_stack *a, t_stack *b);
void    reverse_rotate_a(t_stack *a, int flag);
void    reverse_rotate_b(t_stack *b, int flag);
void    reverse_rr(t_stack *a, t_stack *b);

//Functions

long	ft_atoi(char *str);
char    **ft_split(char const *s, char c);
int	    ft_strlen(const char *s);
void    ft_putstr(char *s);
int     ft_strcmp(char *s1, char *s2);
int    errore(void);

// movers

void    pop_elem(t_stack *x);
void    pop_bottom(t_stack *x);
void    push_elem(t_stack *x, t_node *elem);
void    push_bottom_elem(t_stack *x, t_node *elem);
t_stack *stack_init(void);
t_node  *creat_elem(int i);
void    free_stack(t_stack *a);


// check

int     is_empty(t_stack *x);
int     is_sorted(t_stack x);
int     is_max(t_stack *x, int number);
void    make_to_top(t_stack *x, int number);
int     is_integer(t_stack *a, int ac, char **argv);
int     is_duplicated(t_stack a);
void    check_it(t_stack *a, t_stack *b, int ac, char **av);
int     is_purely_integer(char *av);
int     x(int size, char **av);
int    search_min(t_stack a);
int    is_index(t_stack x, int number);
int     check_n(t_stack *a);

// algorithm

int    *fill_sort_array(t_stack a);
void    a_to_b(t_stack *a, t_stack *b);
void    b_to_a(t_stack *a, t_stack *b);
void    sort_fifteen(t_stack *a, t_stack *b);
void    sort_over(t_stack *a, t_stack *b);
void    sort_three(t_stack *a);
void    sort(t_stack *a, t_stack *b);

#endif