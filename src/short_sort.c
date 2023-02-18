/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:38:59 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/19 00:51:10 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort5(t_list **stack_a, t_list **stack_b, int i)
{
	if ((*stack_a)->next->index == i)
		ft_sa(stack_a);
	else if ((*stack_a)->next->next->index == i)
	{
		ft_ra(stack_a);
		ft_ra(stack_a);
	}
	else if ((*stack_a)->next->next->next->index == i)
	{
		ft_rra(stack_a);
		ft_rra(stack_a);
	}
	else if (ft_lstlast(*stack_a)->index == i)
		ft_rra(stack_a);
	ft_pb(stack_a, stack_b);
	ft_sort4(stack_a, stack_b, ft_min_index(stack_a));
	ft_pa(stack_a, stack_b);
}

void	ft_sort4(t_list **stack_a, t_list **stack_b, int i)
{
	if ((*stack_a)->index == i)
		ft_pb(stack_a, stack_b);
	else if ((*stack_a)->next->index == i)
	{
		ft_sa(stack_a);
		ft_pb(stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->index == i)
	{
		ft_ra(stack_a);
		ft_ra(stack_a);
		ft_pb(stack_a, stack_b);
	}
	else if (ft_lstlast(*stack_a)->index == i)
	{
		ft_rra(stack_a);
		ft_pb(stack_a, stack_b);
	}
	ft_sort3(stack_a);
	ft_pa(stack_a, stack_b);
}

void	ft_sort3(t_list **stack_a)
{
	if (ft_min(stack_a) == (*stack_a)->content
		&& ft_max(stack_a) == (*stack_a)->next->content)
	{
		ft_rra(stack_a);
		ft_sa(stack_a);
	}
	else if (ft_max(stack_a) == (*stack_a)->next->next->content
		&& ft_min(stack_a) == (*stack_a)->next->content)
		ft_sa(stack_a);
	else if (ft_max(stack_a) == (*stack_a)->next->content
		&& ft_min(stack_a) == (*stack_a)->next->next->content)
		ft_rra(stack_a);
	else if (ft_max(stack_a) == (*stack_a)->content
		&& ft_min(stack_a) == (*stack_a)->next->next->content)
	{
		ft_ra(stack_a);
		ft_sa(stack_a);
	}
	else if (ft_max(stack_a) == (*stack_a)->content
		&& ft_min(stack_a) == (*stack_a)->next->content)
		ft_ra(stack_a);
}
