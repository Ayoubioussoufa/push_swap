/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:41:00 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/18 16:04:19 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    push_a(t_stack *a, t_stack *b)
{
    if (!is_empty(b))
    {
        push_elem(a, creat_elem(b->top->content));
        pop_elem(b);
        ft_putstr("pa\n");
    }
}