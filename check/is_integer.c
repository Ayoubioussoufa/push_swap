/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:52:36 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 14:54:53 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_int(char *av)
{
	long	i;

	i = ft_atoi(av);
	if (i == 2147483699)
		errore();
	return (1);
}

void	freeing(char **av)
{
	int	i;

	i = -1;
	while (av[++i])
		free(av[i]);
	free(av);
}

int	is_integer(t_stack *a, int ac, char **argv)
{
	int		i;
	int		k;
	char	**av;

	i = 0;
	while (++i <= ac)
	{
		k = 0;
		av = ft_split(argv[i], ' ');
		if (av[k] == NULL)
			errore();
		while (av[k])
		{
			if (!is_int(av[k]))
				return (0);
			else if (!is_purely_integer(av[k]))
				return (0);
			else
				push_bottom_elem(a, creat_elem(ft_atoi(av[k])));
			k++;
		}
		freeing(av);
	}
	return (1);
}
