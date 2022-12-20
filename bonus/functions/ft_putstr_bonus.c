/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:54:31 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 19:09:39 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		write(2, &s[i++], 1);
}
