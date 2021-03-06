/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manager.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:39:26 by aachbaro          #+#    #+#             */
/*   Updated: 2021/10/04 14:04:03 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_manager(t_objs *stacks)
{
	if (is_sorted(stacks->a))
		return ;
	else if (list_len(stacks->a) <= 2)
		sort_two(stacks);
	else if (list_len(stacks->a) == 3)
		sort_three(stacks);
	else if (list_len(stacks->a) <= 5)
		sort_five(stacks);
	else
		sort_more(stacks);
}
