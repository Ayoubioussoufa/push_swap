/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:16:54 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/17 11:58:51 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int if_found(t_stack *b, char *tab)
{
    int i;

    i = 0;
    while (b->top->under)
    {
        if (tab[i] == b->top->content)
            return (1);
        b->top = b->top->under;
    }
    return (0);
}

void    b_to_a(t_stack *a, t_stack *b)
{
    int     down;
    char    *tab;
    int     i;

    down = 0;
    tab = fill_sort_array(a);
    i = ft_strlen(tab) - 1;
    while (!is_empty(b))
    {
        if (if_found(b, tab))
        {
            while (if_found(b, tab))
            {
                if (tab[i] == b->top->content)
                {
                    push_a(a, b);
                    i--;
                }
                else if (tab[i] > b->top->content)
                {
                    if (down == 0)
                    {
                        push_a(a, b);
                        rotate_a(a, 0);
                        down++;
                    }
                    else if (down > 0 && b->top->content > a->bottom->content)
                    {
                        push_a(a, b);
                        rotate_a(a, 0);
                        down++;
                    }
                    else
                        make_to_top(b, tab[i]);
                }
            }
        }
        else
        {
            reverse_rotate_a(a, 0);
            down--;
        }
    } 
}