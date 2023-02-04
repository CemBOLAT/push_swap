/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:29:44 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/04 18:48:33 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*end;

	if (ft_lstsize(*stack) < 2)
		return (1);
	tmp = *stack;
	end = ft_lstlast(tmp);
	*stack = tmp->next;
	end->next = tmp;
	tmp->next = NULL;
	return (0);
}

int	ft_ra(t_list **stack_a)
{
	if (ft_rotate(stack_a))
		return (1);
	ft_shell_print("ra", 'p');
	return (0);
}

int	ft_rb(t_list **stack_b)
{
	if (ft_rotate(stack_b))
		return (1);
	ft_shell_print("rb", 'p');
	return (0);
}

int	ft_rr(t_list **stack_a, t_list **stack_b)
{
	if (ft_rotate(stack_a) || ft_rotate(stack_b))
		return (1);
	ft_shell_print("rr", 'p');
	return (0);
}
