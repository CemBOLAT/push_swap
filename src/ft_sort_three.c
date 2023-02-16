/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:38:59 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/16 17:22:37 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function sort the stack if there are only
// three elements in the stack.
void	ft_sort3(t_list **stack_a)
{
	if (ft_min(stack_a) == (*stack_a)->content)
	{
		ft_rra(stack_a);
		ft_sa(stack_a);
	}
	else if (ft_max(stack_a) == (*stack_a)->content)
	{
		ft_ra(stack_a);
		if (!ft_is_sorted(stack_a))
			ft_sa(stack_a);
	}
	else
	{
		if (ft_find_index(*stack_a, ft_max(stack_a)) == 1)
			ft_rra(stack_a);
		else
			ft_sa(stack_a);
	}
}
