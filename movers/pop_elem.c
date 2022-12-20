/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_elem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:03:36 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 14:37:54 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pop_elem(t_stack *x)
{
	t_node	*tmp;

	tmp = x->top;
	if (!is_empty(x))
	{
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
