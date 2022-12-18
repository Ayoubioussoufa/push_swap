/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:52:36 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/18 11:25:46 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int is_int(char *av)
{
    long    i;
    
    i = ft_atoi(av);
    if (i == 2147483699)
        errore();
    return (1);
}

int is_integer(int ac, char **argv)
{
    int     i;
    int     k;
    char    **av;

    i = 1;
    while (i <= ac)
    {
        k = 0;
        av = ft_split(argv[i], ' ');
        if (av[k] == NULL)
            errore();
        while (av[k])
        {
            if (!is_int(av[k]))
                return (0);
            k++;
        }
        i++;
    }
    return (1);
}
