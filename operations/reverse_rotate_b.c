/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:42:07 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 14:32:24 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate_b(t_stack *b, int flag)
{
	if (is_empty(b))
		return ;
	push_elem(b, creat_elem(b->bottom->content));
	pop_bottom(b);
	if (!flag)
		ft_putstr("rrb\n");
}
