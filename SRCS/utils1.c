/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:41:55 by aachbaro          #+#    #+#             */
/*   Updated: 2021/09/16 17:38:58 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	add_link(t_link *stack, int data)
{
	t_link	*new;

	new = malloc(sizeof(t_link));
	if (!new)
		return (-1);
	new->data = data;
	new->next = NULL;
	while (stack->next)
		stack = stack->next;
	stack->next = new;
	return (0);
}

void	init_stacks(t_objs *stacks)
{
	t_link	*elem1_sa;
//	t_link	*elem1_sb;

	elem1_sa = malloc(sizeof(t_link));
	elem1_sa->data = 42;
	elem1_sa->next = 0;
	stacks->stack_a = elem1_sa;
//	stacks->stack_b = elem1_sb;
}

void	aff_list(t_link *stack)
{
	while (stack)
	{
		printf("stack->data = %d\n", stack->data);
		stack = stack->next;
	}
}

void	free_list(t_link *stack)
{
	t_link	*tmp;

	tmp = stack;
	while (tmp)
	{
		tmp = stack->next;
		free(stack);
		stack = tmp;
	}
}