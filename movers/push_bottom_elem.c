/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bottom_elem.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:18:51 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/18 14:00:57 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    push_bottom_elem(t_stack *x, t_node *elem)
{
    if (!is_empty(x))
    {
        elem->above = x->bottom;
        x->bottom->under = elem;
    }
    else
        x->top = elem;
    x->bottom = elem;
    x->size++;
}
