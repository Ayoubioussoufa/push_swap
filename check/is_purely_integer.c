/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_purely_integer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 11:00:40 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 13:38:00 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int is_digit(int c)
{
    return (c >= '0' && c <= '9');
}

int is_purely_integer(char *av)
{
    int i;

    i = 0;
    if ((av[0] == '+' || av[0] == '-') && av[1] != 0)
        i++;
    while (av[i])
    {
        if (!is_digit(av[i]))
            errore();
        i++;
    }
    return (1);
}