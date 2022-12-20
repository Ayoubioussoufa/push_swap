/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:42:38 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 20:53:27 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void    write_a(t_stack *a, t_stack *b, char *line)
{
    if (ft_strncmp(line, "pa\n", 3) == 0)
        push_a(a, b);
    else if (ft_strncmp(line, "ra\n", 3) == 0)
        rotate_a(a);
    else if (ft_strncmp(line, "rra\n", 4) == 0)
        reverse_rotate_a(a);
    else
        swap_a(a);
}

void    write_b(t_stack *a, t_stack *b, char *line)
{
    if (ft_strncmp(line, "pb\n", 3) == 0)
        push_b(a, b);
    else if (ft_strncmp(line, "rb\n", 3) == 0)
        rotate_b(b);
    else if (ft_strncmp(line, "rrb\n", 4) == 0)
        reverse_rotate_b(b);
    else
        swap_b(b);
}

void    write_d(t_stack *a, t_stack *b, char *line)
{
    if (ft_strncmp(line, "rr\n", 3) == 0)
        rr(a, b);
    else if (ft_strncmp(line, "ss\n", 3) == 0)
        ss(a, b);
    else
        reverse_rr(a, b);
}

void    checker(t_stack *a, t_stack *b)
{
    char    *line;
    
    while(1)
    {
        line = get_next_line(0);
        if (!line)
            break ;
        if (!ft_strncmp(line, "pa\n", 3) || !ft_strncmp(line, "ra\n", 3)
            || !ft_strncmp(line, "rra\n", 4) || !ft_strncmp(line, "sa\n", 3))
            write_a(a ,b, line);
        else if (!ft_strncmp(line, "pb\n", 3) || !ft_strncmp(line, "rb\n", 3)
            || !ft_strncmp(line, "rrb\n", 4) || !ft_strncmp(line, "sb\n", 3))
            write_b(a, b, line);
        else if (!ft_strncmp(line, "rr\n", 3) || !ft_strncmp(line, "rrr\n", 4)
            || !ft_strncmp(line, "ss\n", 3))
            write_d(a, b, line);
        else
            errore();
        free(line);
    }
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac == 1)
		exit(EXIT_FAILURE);
	a = stack_init();
	b = stack_init();
	check_it(a, b, ac - 1, av);
    checker(a, b);
    if (is_sorted(*a))
        write(1, "OK\n", 3);
    else
        write(1, "KO\n", 3);
	return (0);
}