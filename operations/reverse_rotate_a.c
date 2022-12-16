/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:41:41 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/14 16:50:11 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    reverse_rotate_a(t_stack *a, int flag)
{
    push_elem(a, a->bottom);
    pop_bottom(a);
    if (!flag)
        ft_putstr("rra\n");
}