/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:40:38 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/13 11:17:08 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap_b(t_stack *b, int flag)
{
    int tmp;
    
    tmp = b->top->content;
    b->top->content = b->top->under->content;
    b->top->under->content = tmp;
    if (!flag)
        ft_putstr("sb\n");
}