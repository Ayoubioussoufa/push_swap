/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:51:46 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/16 11:52:07 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(t_stack *x)
{
//     int i;

//     i = 0;
//     while (x->size > i)
//     {
//         if (x->top->content < x->top->under->content)
//             x->top = x->top->under;
//         else
//             return (-1);
//         i++;
//     }
//     return (0);
    while (x->top->under)
    {
        if (x->top->content < x->top->under->content)
            x->top = x->top->under;
        else
            return (-1);
    }
    return (0);
}