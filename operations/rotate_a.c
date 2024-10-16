/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:41:18 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 14:29:55 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(t_stack *a, int flag)
{
	push_bottom_elem(a, creat_elem(a->top->content));
	pop_elem(a);
	if (!flag)
		ft_putstr("ra\n");
}
