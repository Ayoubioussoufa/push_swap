/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_elem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:49:56 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/17 10:45:54 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node  *creat_elem(int i)
{
    t_node  *tmp;

    tmp = malloc(sizeof(t_node));
    if (!tmp)
        return (0);
    tmp->content = i;
    tmp->above = NULL;
    tmp->under = NULL;
    return (tmp);
}