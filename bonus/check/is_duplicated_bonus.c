/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicated_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:27:40 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 19:09:19 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

int	is_duplicated(t_stack a)
{
	t_node	*tmp;

	while (a.top)
	{
		tmp = a.top;
		while (tmp->under)
		{
			tmp = tmp->under;
			if (a.top->content == tmp->content)
				errore();
		}
		a.top = a.top->under;
	}
	return (1);
}
