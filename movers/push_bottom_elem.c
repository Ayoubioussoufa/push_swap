/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bottom_elem.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:18:51 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/16 15:59:01 by aybiouss         ###   ########.fr       */
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
