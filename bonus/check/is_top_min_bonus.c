/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_top_min_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:43:41 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 20:30:44 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

int	is_index(t_stack x, int number)
{
	int	i;

	i = 0;
	while (x.top)
	{
		if (number == x.top->content)
			return (i);
		x.top = x.top->under;
		i++;
	}
	return (i);
}

void	make_to_top(t_stack *x, int number)
{
	int	i;
	int	j;

	j = x->size;
	i = is_index(*x, number);
	if (j / 2 < i)
	{
		while (j - i > 0)
		{
			reverse_rotate_b(x);
			i++;
		}
	}
	else
	{
		while (i != 0)
		{
			rotate_b(x);
			i--;
		}
	}
}
