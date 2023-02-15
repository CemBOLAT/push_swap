/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 00:42:23 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/15 01:03:42 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_step1(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) > 3 && ft_is_sorted(stack_a) == 0)
		ft_pb(stack_a, stack_b);
	if (ft_lstsize(*stack_a) > 3 && ft_is_sorted(stack_a) == 0)
		ft_pb(stack_a, stack_b);
	if (ft_lstsize(*stack_a) > 3 && ft_is_sorted(stack_a) == 0)
		ft_push_b_till_3(stack_a, stack_b);
	if (ft_is_sorted(stack_a))
		ft_sort3(stack_a);
	return ;
}

void	ft_step2(t_list **stack_a, t_list **stack_b)
{
	int		i;
	t_list	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = ft_rotate_type_ba(stack_a, stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb_a(stack_a, stack_b, tmp->content))
				i = ft_apply_rarb(stack_a, stack_b, tmp->content, 'b');
			else if (i == ft_case_rarrb_a(stack_a, stack_b, tmp->content))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->content, 'b');
			else if (i == ft_case_rrarrb_a(stack_a, stack_b, tmp->content))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->content, 'b');
			else if (i == ft_case_rrarb_a(stack_a, stack_b, tmp->content))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->content, 'b');
			else
				tmp = tmp->next;
		}
	}
}
