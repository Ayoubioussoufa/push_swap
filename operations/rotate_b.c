/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:41:26 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/16 15:59:01 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rotate_b(t_stack *b, int flag)
{
    push_bottom_elem(b, b->top);
    pop_elem(b);
    if (!flag)
        ft_putstr("rb\n");
}