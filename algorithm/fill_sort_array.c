/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_sort_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:19:33 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/18 19:19:45 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int    *fill_sort_array(t_stack a)
{
    int    *tab;
    int     i;
    int     j;
    int     tmp;

    i = 0;
    tab = malloc(sizeof(a.size));
    while (i < a.size && a.top)
    {
        tab[i] = a.top->content;
        a.top = a.top->under;
        i++;
    }
    i = 0;
    while (i < a.size - 1)
    {
        j = 0;
        while (j < a.size - i - 1)
        {
            if (tab[j] > tab[j + 1])
            {
                tmp = tab[j + 1];
                tab[j + 1] = tab[j];
                tab[j] = tmp;
            }
            j++;
        }
        i++;
    }
    return (tab);
}