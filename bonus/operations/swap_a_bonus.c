/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:40:31 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 20:25:40 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	swap_a(t_stack *a)
{
	int	tmp;

	tmp = a->top->content;
	a->top->content = a->top->under->content;
	a->top->under->content = tmp;
}
