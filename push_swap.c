/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:53:32 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/19 17:36:33 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack *a;
    t_stack *b;

    if (ac == 1)
        exit(EXIT_FAILURE);
    a = stack_init();
    b = stack_init();
    check_it(a, b, ac - 1, av);
    //rotate_a(a, 0);
    //a_to_b(a, b);
    //sort_over(a, b);
    sort(a, b);
    printf("\n*****************\n");
    // int i = search_min(*a);
    // printf("%d\n", i);
    // printf("%d\n", is_index(*a, i));
    // make_to_top(a, i);
    while (a->top)
    {
        printf("%d\n", a->top->content);
        a->top =  a->top->under;
    }
    // printf("\n*************\n");
    // while(b->top)
    // {
    //     printf("%d\n", b->top->content);
    //     b->top =  b->top->under;
    // }
    //free_stack(a);
    return (0);
}