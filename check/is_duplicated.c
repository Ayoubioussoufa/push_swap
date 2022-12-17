/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicated.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:27:40 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/17 10:30:26 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int is_duplicated(int size, char **av)
{
    int i;
    int j;
    
    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (av[j])
        {
            if (ft_strcmp(av[i], av[j]) == 0)
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

// int is_duplicated(char **av)
// {
//     int i;
//     int j;
//     int k;
    
//     i = 0;
//     j = 0;
//     while (av[i][j])
//     {
//         j = 0;
//         while (av[i][j])
//         {
//             k = j + 1;
//             while (av[i][k])
//             {
//                 if (av[i][j] == av[i][k])
//                 {
//                     ft_putstr("Error\n");
//                     return (0);
//                 }
//                 k++;
//             }
//             j++;
//         }
//         i++;
//     }
//     return (1);
// }