/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:26:07 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/21 09:54:53 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	start_calc(int start, int offset)
{
	start -= offset;
	if (start < 0)
		start = 0;
	return (start);
}

int	end_calc(int end, int offset, int length)
{
	end += offset;
	if (end >= length)
		end = length - 1;
	return (end);
}

void	a_to_b(t_stack *a, t_stack *b, int *tab, int n)
{
	t_data		context;
	static int	i;

	context.middle = (a->size / 2);
	context.offset = a->size / n;
	context.start = context.middle - context.offset;
	context.end = context.middle + context.offset;
	context.length = a->size;
	while (!is_empty(a))
	{
		while (i < context.end - context.start + 1)
		{
			if (a->top->content >= tab[context.start]
				&& a->top->content <= tab[context.end])
			{
				(push_b(a, b), i++);
				if (b->top->content < tab[context.middle])
					rotate_b(b, 0);
			}
			else
				rotate_a(a, 0);
		}
		context.start = start_calc(context.start, context.offset);
		context.end = end_calc(context.end, context.offset, context.length);
	}
}
