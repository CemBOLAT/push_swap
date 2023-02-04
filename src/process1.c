/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:01:26 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/04 17:22:38 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_swap(t_list **stack)
{
	t_list	*tmp;
	t_list	*next_temp;
	int		content;
	int		index;

	if (ft_lstsize(*stack) < 2)
		return (1);
	tmp = *stack;
	next_temp = tmp->next;
	content = tmp->content;
	index = tmp->index;
	tmp->content = next_temp->content;
	tmp->index = next_temp->index;
	next_temp->content = content;
	next_temp->index = index;
	return (0);
}

int	ft_sa(t_list **stack_a)
{
	if (ft_swap(stack_a))
		return (1); // bekle
	ft_shell_print("sa", 'p');
	return (0);
}

int	ft_sb(t_list **stack_b)
{
	if (ft_swap(stack_b))
		return (1); // bekle
	ft_shell_print("sb", 'p');
	return (0);
}

int	ft_ss(t_list **stack_a, t_list **stack_b)
{
	if (ft_swap(stack_a) || ft_swap(stack_b))
		return (1); // bekle
	ft_shell_print("ss", 'p');
	return (0);
}
