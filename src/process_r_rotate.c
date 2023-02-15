/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_r_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:51:52 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/09 21:52:27 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_reverse(t_list **stack)
{
	t_list	*tmp;
	t_list	*end;

	tmp = *stack;
	end = ft_lstlast(*stack);
	while (tmp)
	{
		if (!(tmp->next->next))
		{
			tmp->next = NULL;
			break;
		}
		tmp = tmp->next;
	}
	end->next = *stack;
	*stack = end;
	return (0);
}

int	ft_rra(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) < 2)
		return (1);
	ft_reverse(stack_a);
	ft_shell_print("rra\n", 'p');
	return (0);
}

int	ft_rrb(t_list **stack_b)
{
	if (ft_lstsize(*stack_b) < 2)
		return (1);
	ft_reverse(stack_b);
	ft_shell_print("rrb\n", 'p');
	return (0);
}

int	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) < 2 || ft_lstsize(*stack_b) < 2)
		return (1);
	ft_reverse(stack_b);
	ft_shell_print("rrr\n", 'p');
	return (0);
}
