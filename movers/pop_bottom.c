/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_bottom.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:39:20 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/14 16:17:47 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pop_bottom(t_stack *x)
{
    t_node  *tmp;
    
    if (!is_empty(x))
    {
        tmp = x->bottom;
        x->bottom = x->bottom->above;
        if (x->size == 1)
        {
            x->bottom = NULL;
            x->top = NULL;
        }
        else
            x->bottom->under = NULL;
        free(tmp);
        x->size--;
    }
}