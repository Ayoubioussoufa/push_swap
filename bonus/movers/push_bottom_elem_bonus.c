/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bottom_elem_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:18:51 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 19:14:41 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	push_bottom_elem(t_stack *x, t_node *elem)
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
