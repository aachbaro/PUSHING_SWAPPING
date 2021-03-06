/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 12:27:30 by aachbaro          #+#    #+#             */
/*   Updated: 2021/10/04 18:15:46 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "LIBFT/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_link
{
	int				data;
	int				val;
	struct s_link	*next;
	struct s_link	*prev;
}				t_link;

typedef struct	s_objs
{
	t_link	*a;
	t_link	*b;
}				t_objs;

void	init_stacks(t_objs *stacks);
void	aff_list(t_objs stacks);
int		add_link(t_link **stack, int data, int val);
void	free_list(t_link *stack);
int		list_len(t_link *stack);
int		check_nbr(char *str);
int		check_double(t_objs *stacks);
int		ret_error(t_objs *stacks);
int		get_stack(int ac, char **av, t_objs *stacks);
void	swap_a(t_objs *stacks);
void	swap_b(t_objs *stacks);
void	swap_ab(t_objs *stacks);
void	push_a(t_objs *stacks);
void	push_b(t_objs *stacks);
void	rotate_a(t_objs *stacks);
void	rotate_b(t_objs *stacks);
void	rotate_ab(t_objs *stacks);
void	rev_rotate_a(t_objs *stacks);
void	rev_rotate_b(t_objs *stacks);
void	rev_rotate_ab(t_objs *stacks);
int		is_sorted(t_link *stack);
void	get_val(t_objs *stacks);
int		get_median(t_link *stack);
void	get_out(t_objs *stacks, int val);
void	sort_manager(t_objs *stacks);
void	sort_two(t_objs *stacks);
void	sort_three(t_objs *stacks);
void	sort_five(t_objs *stacks);
void	sort_fivetwo(t_objs *stacks);
void	sort_more(t_objs *stacks);

#endif
