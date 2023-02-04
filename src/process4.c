/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:40:47 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/04 18:47:26 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_reverse(t_list **stack)
{
	t_list	*tmp;
	t_list	*start;

	if (ft_lstsize(*stack) < 2)
		return (1);
	tmp = (*stack)->next;
	start = (*stack);
	start->next = NULL;
	*stack = tmp;
	ft_lstadd_back(stack, start);
	return (0);
}

int	ft_rra(t_list **stack_a)
{
	if (ft_reverse(stack_a))
		return (1);
	ft_shell_print("rra", 'p');
	return (0);
}

int	ft_rrb(t_list **stack_b)
{
	if (ft_reverse(stack_b))
		return (1);
	ft_shell_print("rrb", 'p');
	return (0);
}

int	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	if (ft_reverse(stack_a) || ft_reverse(stack_b))
		return (1);
	ft_shell_print("rrr", 'p');
	return (0);
}

