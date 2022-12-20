/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:42:07 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 20:25:13 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	reverse_rotate_b(t_stack *b)
{
	if (is_empty(b))
		return ;
	push_elem(b, creat_elem(b->bottom->content));
	pop_bottom(b);
}
