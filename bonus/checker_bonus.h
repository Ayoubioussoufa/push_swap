/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybiouss <aybiouss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:43:11 by aybiouss          #+#    #+#             */
/*   Updated: 2022/12/20 20:49:54 by aybiouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <limits.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <string.h>

typedef struct s_node {
	struct s_node	*above;
	struct s_node	*under;
	int				content;
}	t_node;

typedef struct s_stack {
	t_node	*top;
	t_node	*bottom;
	int		size;
}	t_stack;

typedef struct s_data
{
	int	middle;
	int	offset;
	int	start;
	int	end;
	int	length;
}	t_data;
// operations
void	swap_a(t_stack *a);
void	swap_b(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	push_a(t_stack *a, t_stack *b);
void	push_b(t_stack *a, t_stack *b);
void	rotate_a(t_stack *a);
void	rotate_b(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	reverse_rotate_a(t_stack *a);
void	reverse_rotate_b(t_stack *b);
void	reverse_rr(t_stack *a, t_stack *b);

//Functions
long	ft_atoi(char *str);
char	**ft_split(char const *s, char c);
void	ft_putstr(char *s);
int		ft_strncmp(char *s1, char *s2, int n);
void	errore(void);
char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *str);
void	ft_putstr_error(char *s);

// movers
void	pop_elem(t_stack *x);
void	pop_bottom(t_stack *x);
void	push_elem(t_stack *x, t_node *elem);
void	push_bottom_elem(t_stack *x, t_node *elem);
t_stack	*stack_init(void);
t_node	*creat_elem(int i);
void	free_stack(t_stack *a);

// check
int		is_empty(t_stack *x);
int		is_sorted(t_stack x);
int		is_max(t_stack *x, int number);
void	make_to_top(t_stack *x, int number);
int		is_integer(t_stack *a, int ac, char **argv);
int		is_duplicated(t_stack a);
void	check_it(t_stack *a, t_stack *b, int ac, char **av);
int		is_purely_integer(char *av);
int		search_min(t_stack a);
int		is_index(t_stack x, int number);
int		check_n(t_stack *a);

#endif
