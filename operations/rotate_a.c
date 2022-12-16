/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:41:18 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/14 16:50:29 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rotate_a(t_stack *a, int flag)
{
    push_bottom_elem(a, a->top);
    pop_elem(a);
    if (!flag)
        ft_putstr("ra\n");
}