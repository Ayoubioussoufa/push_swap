/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_it.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:57:43 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/16 14:52:50 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_it(int ac, char **av)
{
    if (!is_integer(ac, av) || !is_duplicated(av))
        exit(EXIT_FAILURE);
}