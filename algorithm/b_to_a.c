/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:16:54 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 13:27:31 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int if_found(t_stack b, int max)
{
    while (b.top)
    {
        if (max == b.top->content)
            return (1);
        b.top = b.top->under;
    }
    return (0);
}

void    b_to_a(t_stack *a, t_stack *b, int *tab)
{
    int     down;
    int     i;

    down = 0;
    i = b->size - 1;
    while (!is_empty(b) || down > 0)
    {
        if (if_found(*b, tab[i]) == 1)
        {
            while (if_found(*b, tab[i]) == 1)
            {
                if (b->top->content == tab[i])
                {
                    push_a(a, b);
                    i--;
                }
                else if (down == 0 || b->top->content > a->bottom->content)
                {
                    push_a(a, b);
                    rotate_a(a, 0);
                    down++;
                }
                else
                    make_to_top(b, tab[i]);
            }
        }
        else
        {
            reverse_rotate_a(a, 0);
            i--;
            down--;
        }
    } 
}