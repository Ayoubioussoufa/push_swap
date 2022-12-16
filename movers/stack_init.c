/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:54:11 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/16 16:01:38 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack    *stack_init(void)
{
    t_stack *x;

    x = malloc(sizeof(t_stack));
    if (!x)
        return (0);
    x->top = NULL;
    x->bottom = NULL;
    x->size = 0;
    return (x);
}