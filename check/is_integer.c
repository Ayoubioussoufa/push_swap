/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:52:36 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/17 11:00:57 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int is_digit(int c)
{
    return (c >= '0' && c <= '9');
}

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
        while (av[i] >= '0' || av[i] <= '9')
            i++;
        if (!is_digit(av[i]))
        {
            ft_putstr("Error\n");
            return (0);
        }
    }
    return (1);
}

int is_integer(int ac, char **argv)
{
    int     i;
    int     k;
    char    **av;

    i = 1;
    while (i < ac)
    {
        k = 0;
        av = ft_split(argv[i], ' ');
        if (av[k] == NULL)
        {
            ft_putstr("Error\n");
            return (0);
        }
        while (av[k])
        {
            if (!is_purely_integer(av[k]))
                return (0);
            else if (!is_int(av[k]))
                return (0);
            k++;
        }
        i++;
    }
    return (1);
}
