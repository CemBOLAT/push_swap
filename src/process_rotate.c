/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:47:43 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/09 21:50:38 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*end;

	tmp = *stack;
	end = ft_lstlast(tmp);

	*stack = tmp->next;
	tmp->next = NULL;
	end->next = tmp;
	return (0);
}

int	ft_ra(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) < 2)
		return (1);
	ft_rotate(stack_a);
	ft_shell_print("ra\n", 'p');
	return (0);
}

int	ft_rb(t_list **stack_b)
{
	if (ft_lstsize(*stack_b) < 2)
		return (1);
	ft_rotate(stack_b);
	ft_shell_print("rb\n", 'p');
	return (0);
}

int	ft_rr(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) < 2 || ft_lstsize(*stack_b) < 2)
		return (1);
	ft_ra(stack_a);
	ft_rb(stack_b);
	ft_shell_print("rr\n", 'p');
	return (0);
}
