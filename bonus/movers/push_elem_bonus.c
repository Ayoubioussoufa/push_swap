/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_elem_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:03:27 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 19:14:47 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	push_elem(t_stack *x, t_node *elem)
{
	if (!is_empty(x))
	{
		elem->under = x->top;
		x->top->above = elem;
	}
	else
		x->bottom = elem;
	x->top = elem;
	x->size++;
}
