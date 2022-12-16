/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:42:07 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/14 16:50:14 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    reverse_rotate_b(t_stack *b, int flag)
{
    push_elem(b, b->bottom);
    pop_bottom(b);
    if (!flag)
        ft_putstr("rrb\n");
}