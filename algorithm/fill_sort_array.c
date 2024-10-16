/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_sort_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:19:33 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 15:05:18 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*sort_tab(int length, int *tab)
{
	int	i;
	int	tmp;
	int	j;

	i = 0;
	while (i < length - 1)
	{
		j = 0;
		while (j < length - i - 1)
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

int	*fill_sort_array(t_stack a)
{
	int	*tab;
	int	i;
	int	length;

	i = 0;
	length = a.size;
	tab = malloc(sizeof(a.size) * length);
	while (i < length && a.top)
	{
		tab[i] = a.top->content;
		a.top = a.top->under;
		i++;
	}
	tab = sort_tab(length, tab);
	return (tab);
}
