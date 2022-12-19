/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:26:07 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/19 17:44:56 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// int hhh(t_stack a, t_stack *b, int min, int max)
// {
//     int     n;
//     int     middle;
//     int    *tab;
//     int     i;
//     int     length;

//     i = 0;
//     n = check_n(a);
//     tab = fill_sort_array(&a);
//     middle = (a->size / 2) - 1;
//     offset = a->size / n;
//     length = a->size;
//     while (length)
//     {
        
//     }
    
// }
void    a_to_b(t_stack *a, t_stack *b)
{
    int     n;
    int     middle;
    int     offset;
    int     start;
    int     end;
    int    *tab;
    int     length;
    int     i;

    i = 0;
    n = check_n(a);
    tab = fill_sort_array(*a);
    middle = (a->size / 2) - 1;
    offset = a->size / n;
    start = middle - offset;
    end = middle + offset;
    length = a->size;
    while (!is_empty(a))
    {
        while (i < end - start + 1)
        {
            if (a->top->content >= tab[start] && a->top->content <= tab[end])
            {
                push_b(a, b);
                i++;
                if (b->top->content < tab[middle])
                    rotate_b(b, 0);
            }
            else
                rotate_a(a, 0);
        }
        end += offset;
        if (end >= length)
            end = length - 1;
        start -= offset;
        if (start < 0)
            start = 0;
    }
    // while (!is_empty(a))
    // {
    //     length = a->size;
    //     while (length)
    //     {
    //         if (a->top->content >= tab[start] && a->top->content <= tab[end])
            
    //         length--;
    //     }
    // }
}
    // printf("%d\n", end);
    // printf("%d\n", start);
    // printf("%d\n", middle);
    // printf("%d\n", offset);
    // while (tab[i])
    //     printf("%d ", tab[i++]);
    // printf("\n %d \t %d \t %d", tab[start], tab[middle], tab[end]);
    // (void )b;
    // (void )length;