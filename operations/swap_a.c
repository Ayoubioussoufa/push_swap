/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:40:31 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 14:31:33 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_stack *a, int flag)
{
	int	tmp;

	tmp = a->top->content;
	a->top->content = a->top->under->content;
	a->top->under->content = tmp;
	if (!flag)
		ft_putstr("sa\n");
}
