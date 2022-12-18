/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:26:07 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/18 19:36:42 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    a_to_b(t_stack *a, t_stack *b)
{
    int     n;
    int     middle;
    int     offset;
    int     start;
    int     end;
    int    *tab;
    int     length;

    n = check_n(a);
    length = a->size;
    tab = fill_sort_array(*a);
    middle = a->size / 2;
    offset = a->size / n;
    start = middle - offset;
    end = middle + offset;
    while (!is_empty(a))
    {
        if (end > length)
            end = length;
        while (a->size > start + end - (2*n))
        {
            if (a->top->content >= tab[start] && a->top->content <= tab[end])
            {
                push_b(a, b);
                if (b->top->content < tab[middle])
                    rotate_b(b, 0);
            }
            else
                rotate_a(a, 0);  
        }
        start -= offset;
        end += offset;
        if (start < 0)
            start = 0;
    }
}