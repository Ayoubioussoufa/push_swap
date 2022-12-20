/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_it_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:57:43 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 19:09:13 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	check_it(t_stack *a, t_stack *b, int ac, char **av)
{
	if (!is_integer(a, ac, av))
		exit(EXIT_FAILURE);
	else if (!is_duplicated(*a))
		exit(EXIT_FAILURE);
	if (is_sorted(*a))
	{
		free_stack(a);
		free(b);
		exit(EXIT_SUCCESS);
	}
}
