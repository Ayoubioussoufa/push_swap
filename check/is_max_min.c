/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_max_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:43:41 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/15 18:47:12 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    is_max(t_stack *x, int number)
{
    int i;

    i = 0;
    while (x->top->under)
    {
        if (number == x->top->content)
            return (i);
        else
        {
            x->top = x->top->under;
            i++;
        }
    }
    return (i);
}

void    make_to_top(t_stack *x, int number)
{
    int i;
    int middle;

    middle = x->size / 2;
    i = is_max(x, number);
    if (i > middle)
    {
        while (i > middle)
        {
            reverse_rotate_b(x, 0);
            i--;
        }   
    }
    else
    {
        while (i < middle)
        {
            rotate_b(x, 0);
            i--;
        }
    }
}