/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 11:26:20 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/17 11:56:06 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sort_three(t_stack *a)
{
    if (a->top->content < a->bottom->content && a->top->under->content > a->bottom->content)
        rotate_a(a, 0);
    else if (a->top->content < a->bottom->content && a->top->under->content < a->bottom->content)
    {
        swap_a(a, 0);
        reverse_rotate_a(a, 0);
    }
    else if (a->top->content < a->bottom->content && a->top->under->content < a->bottom->content
        && a->top->content > a->top->under->content)
        reverse_rotate_a(a, 0);
    else if (a->top->content > a->bottom->content && a->top->content < a->top->under->content)
        swap_a(a, 0);
    else if (a->top->content > a->bottom->content && a->top->under->content < a->bottom->content)
    {
        reverse_rotate_a(a, 0);
        swap_a(a, 0);
    }
}