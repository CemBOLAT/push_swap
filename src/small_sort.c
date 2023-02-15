/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:32:22 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/15 00:34:40 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort2(t_list **stack_a)
{
	if ((*stack_a)->content > (*stack_a)->next->content)
		ft_sa(stack_a);
}

void	ft_sort3(t_list **stack_a)
{
	if ((*stack_a)->content > (*stack_a)->next->content &&
		(*stack_a)->next->content > (*stack_a)->next->next->content)
		{
			ft_sa(stack_a);
			ft_rra(stack_a);
		}
	else if ((*stack_a)->content > (*stack_a)->next->next->content &&
		(*stack_a)->next->next->content > (*stack_a)->next->content)
			ft_ra(stack_a);
	else if ((*stack_a)->next->next->content > (*stack_a)->content &&
		(*stack_a)->content > (*stack_a)->next->content)
			ft_sa(stack_a);
	else if ((*stack_a)->next->content > (*stack_a)->content &&
		(*stack_a)->content > (*stack_a)->next->next->content)
			ft_rra(stack_a);
	else if ((*stack_a)->next->content > (*stack_a)->next->next->content &&
		(*stack_a)->next->next->content > (*stack_a)->content)
	{
		ft_sa(stack_a);
		ft_ra(stack_a);
	}
}
