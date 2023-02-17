/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:38:53 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/17 16:43:11 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_b_till_5(t_list **stack_a, t_list **stack_b)
{
	int		i;
	t_list	*tmp;

	while (ft_lstsize(*stack_a) > 5 && !ft_is_sorted(stack_a))
	{
		tmp = *stack_a;
		i = ft_rotate_type_ab(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb(*stack_a, *stack_b, tmp->content, 1))
				i = ft_apply_rarb(stack_a, stack_b, tmp->content, 'a');
			else if (i == ft_case_rrarrb(*stack_a, *stack_b, tmp->content, 1))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->content, 'a');
			else if (i == ft_case_rarrb(*stack_a, *stack_b, tmp->content, 1))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->content, 'a');
			else if (i == ft_case_rrarb(*stack_a, *stack_b, tmp->content, 1))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->content, 'a');
			else
				tmp = tmp->next;
		}
	}
}

void	ft_step1(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) > 5 && !ft_is_sorted(stack_a))
		ft_pb(stack_a, stack_b);
	if (ft_lstsize(*stack_a) > 5 && !ft_is_sorted(stack_a))
		ft_pb(stack_a, stack_b);
	if (ft_lstsize(*stack_a) > 5 && !ft_is_sorted(stack_a))
		ft_sort_b_till_5(stack_a, stack_b);
	if (!ft_is_sorted(stack_a))
		ft_sort5(stack_a, stack_b, ft_min_index(stack_a));
}

void	ft_step2(t_list **stack_a, t_list **stack_b)
{
	int		i;
	t_list	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = ft_rotate_type_ba(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb(*stack_a, *stack_b, tmp->content, 2))
				i = ft_apply_rarb(stack_a, stack_b, tmp->content, 'b');
			else if (i == ft_case_rarrb(*stack_a, *stack_b, tmp->content, 2))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->content, 'b');
			else if (i == ft_case_rrarrb(*stack_a, *stack_b, tmp->content, 2))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->content, 'b');
			else if (i == ft_case_rrarb(*stack_a, *stack_b, tmp->content, 2))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->content, 'b');
			else
				tmp = tmp->next;
		}
	}
}

void	ft_long_sort(t_list **stack_a, t_list **stack_b)
{
		int		i;

		ft_step1(stack_a, stack_b);
		ft_step2(stack_a, stack_b);
		i = ft_find_index(*stack_a, ft_min(stack_a));
		if (i < ft_lstsize(*stack_a) - i)
		{
			while ((*stack_a)->content != ft_min(stack_a))
				ft_ra(stack_a);
		}
		else
		{
			while ((*stack_a)->content != ft_min(stack_a))
				ft_rra(stack_a);
		}
}

void	ft_sort(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) == 2)
		ft_sa(stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		ft_sort3(stack_a);
	else if (ft_lstsize(*stack_a) == 4)
		ft_sort4(stack_a, stack_b, 0);
	else if (ft_lstsize(*stack_a) == 5)
		ft_sort5(stack_a, stack_b, 0);
	else
		ft_long_sort(stack_a, stack_b);
}
