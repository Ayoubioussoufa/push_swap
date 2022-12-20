/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:41:41 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 14:28:24 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate_a(t_stack *a, int flag)
{
	if (is_empty(a))
		return ;
	push_elem(a, creat_elem(a->bottom->content));
	pop_bottom(a);
	if (!flag)
		ft_putstr("rra\n");
}
