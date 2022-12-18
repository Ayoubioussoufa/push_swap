/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_it.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:57:43 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/18 13:56:09 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void check_it(t_stack *a, t_stack *b, int ac, char **av)
{
    // if (!is_integer(ac, av) || !is_duplicated(ac, av)
    //     || !x(ac, av))
    //     exit(EXIT_FAILURE);
    while (ac)
        push_elem(a, creat_elem(ft_atoi(av[ac--])));
    if (is_sorted(*a))
    {
        free_stack(a);
        free(b);
        exit(EXIT_SUCCESS);
    }
}