/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:54:11 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 19:14:52 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

t_stack	*stack_init(void)
{
	t_stack	*x;

	x = malloc(sizeof(t_stack));
	if (!x)
		return (0);
	x->top = NULL;
	x->bottom = NULL;
	x->size = 0;
	return (x);
}
