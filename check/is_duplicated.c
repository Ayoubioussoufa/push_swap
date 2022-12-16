/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicated.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:27:40 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/16 14:28:38 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_duplicated(char **av)
{
    int i;
    int j;
    
    i = 0;
    while (av[i])
    {
        j = i + 1;
        while (av[j])
        {
            if (av[i] == av[j])
            {
                ft_putstr("Error\n");
                return (0);
            }
            j++;
        }
        i++;
    }
    return (1);
}