/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:40:38 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 20:25:46 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	swap_b(t_stack *b)
{
	int	tmp;

	tmp = b->top->content;
	b->top->content = b->top->under->content;
	b->top->under->content = tmp;
}
