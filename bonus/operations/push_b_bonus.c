/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:41:09 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 20:24:18 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	push_b(t_stack *a, t_stack *b)
{
	if (!is_empty(a))
	{
		push_elem(b, creat_elem(a->top->content));
		pop_elem(a);
	}
}
