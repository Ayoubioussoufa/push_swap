/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:52:36 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/16 14:53:08 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_int(char *av)
{
    long    i;
    
    i = ft_atoi(av);
    if (i == 2147483699)
    {
        ft_putstr("Error\n");
        return (0);
    }
    else
        return (1);
}

int is_purely_integer(char *av)
{
    int i;

    i = 0;
    while (av[i])
    {
        if (av[i] == '+' || av[i] == '-' || av[i + 1] != 0)
            i++;
        else if (av[i] >= '0' || av[i] <= '9')
            i++;
        else
        {
            ft_putstr("Error\n");
            return (0);
        }
    }
    return (1);
}

int is_integer(int ac, char **av)
{
    int i;
    int k;

    i = 1;
    while (i <= ac)
    {
        k = 0;
        av = ft_split(av[i], ' ');
        while (av[k])
        {
            if (is_purely_integer(av[k]) == 0)
                return (0);
            else if (is_int(av[k]) == 0);
                return (0);
            k++;
        }
        i++;
    }
    return (1);
}
