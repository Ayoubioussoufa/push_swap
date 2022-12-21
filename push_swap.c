/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:53:32 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/21 11:38:51 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	int		*tab;
	int		i;
	int		n;

	i = 0;
	if (ac == 1)
		exit(EXIT_FAILURE);
	a = stack_init();
	b = stack_init();
	check_it(a, b, ac - 1, av);
	n = check_n(a);
	tab = fill_sort_array(*a);
	sort(a, b, tab, n);
	return (0);
}
