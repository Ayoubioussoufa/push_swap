/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:26:07 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/15 17:49:06 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    a_to_b(t_stack *a, t_stack *b)
{
    int n;
    int middle;
    int offset;
    int start;
    int end;
    char    *tab;
    t_stack *x;

    if (a->size < 18)
        n = 5;
    else
        n = 18;
    x = a;
    tab = fill_sort_array(a);
    middle = a->size / 2;
    offset = a->size / n;
    start = middle - offset;
    end = middle + offset;
    while (!is_empty(a) || a->size > 3)
    {
        a = x->top;
        while (a->top->under)
        {
            if (a->top->content >= tab[start] && a->top->content <= tab[end])
                push_b(a, b);
            else if (b->top->content < middle)
                rotate_b(b, 0);
            a->top = a->top->under;
        }
        start -= offset;
        end += offset;
    }
}