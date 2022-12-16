/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:42:22 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/16 15:59:01 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    reverse_rr(t_stack *a, t_stack *b)
{
    reverse_rotate_a(a, 1);
    reverse_rotate_b(b, 1);
    ft_putstr("rrr\n");
}