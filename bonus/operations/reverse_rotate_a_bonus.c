/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:41:41 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 20:25:07 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	reverse_rotate_a(t_stack *a)
{
	if (is_empty(a))
		return ;
	push_elem(a, creat_elem(a->bottom->content));
	pop_bottom(a);
}
