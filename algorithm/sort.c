/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 11:27:08 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 10:39:30 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sort(t_stack *a, t_stack *b, int *tab)
{
    if (is_sorted(*a))
        exit(EXIT_SUCCESS);
    else if (a->size == 2)
        swap_a(a, 0);
    else if (a->size == 3)
        sort_three(a);
    else if (a->size <= 15)
        sort_fifteen(a, b);
    else
        sort_over(a, b, tab);
}