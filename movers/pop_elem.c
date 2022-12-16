/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_elem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:03:36 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/14 16:11:27 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pop_elem(t_stack *x)
{
    t_node  *tmp;
    
    if (!is_empty(x))
    {
        tmp = x->top;
        x->top = x->top->under;
        if (x->size == 1)
        {
            x->top = NULL;
            x->bottom = NULL;
        }
        else
            x->top->above = NULL;
    }
    free(tmp);
    x->size--;
}