/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_fifteen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:53:14 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 15:06:54 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	search_min(t_stack a)
{
	int	i;

	i = a.top->content;
	while (a.top->under)
	{
		if (i > a.top->under->content)
			i = a.top->under->content;
		a.top = a.top->under;
	}
	return (i);
}

void	sort_fifteen(t_stack *a, t_stack *b)
{
	int	min;
	int	length;

	length = a->size;
	while (a->size > 3)
	{
		min = search_min(*a);
		make_to_top(a, min);
		push_b(a, b);
	}
	if (a->size == 3)
		sort_three(a);
	while (a->size < length)
		push_a(a, b);
}
