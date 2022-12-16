/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicated.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:27:40 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/16 16:42:55 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    ft_putstr(char *s)
{
    int i;

    i = -1;
    while (s[++i])
        write(1, &s[i], 1);
}

// int is_duplicated(char **av)
// {
//     int i;
//     int j;
    
//     i = 0;
//     while (av[i])
//     {
//         j = i + 1;
//         while (av[j])
//         {
//             if (av[i] == av[j])
//             {
//                 ft_putstr("Error\n");
//                 return (0);
//             }
//             j++;
//         }
//         i++;
//     }
//     return (1);
// }

int is_duplicated(char **av)
{
    int i;
    int j;
    int k;
    
    i = 0;
    j = 0;
    while (av[i][j])
    {
        j = 0;
        while (av[i][j])
        {
            k = j + 1;
            while (av[i][k])
            {
                if (av[i][j] == av[i][k])
                {
                    ft_putstr("Error\n");
                    return (0);
                }
                k++;
            }
            j++;
        }
        i++;
    }
    return (1);
}