/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 22:38:20 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/15 01:06:07 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_list **stack)
{
	int		i;
	t_list	*tmp;

	tmp = *stack;
	i = tmp->content;
	while (tmp)
	{
		if (tmp->content < i)
			i = tmp->content;
		tmp = tmp->next;
	}
	return (i);
}

int	ft_min_index(t_list **stack)
{
	int		i;
	t_list	*tmp;

	tmp = *stack;
	i = tmp->index;
	while (tmp)
	{
		if (tmp->index < i)
			i = tmp->index;
		tmp = tmp->next;
	}
	return (i);
}

int	ft_max(t_list **stack)
{
	int		i;
	t_list	*tmp;

	tmp = *stack;
	i = tmp->content;
	while (tmp)
	{
		if (tmp->content > i)
			i = tmp->content;
		tmp = tmp->next;
	}
	return (i);
}

void	ft_push_b_till_3(t_list **stack_a, t_list **stack_b)
{
	int		i;
	t_list	*tmp;

	while (ft_lstsize(*stack_a) > 3 && ft_is_sorted(stack_a) == 0)
	{
		tmp = *stack_a;
		i = ft_rotate_type_ab(stack_a, stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb(stack_a, stack_b, tmp->content))
				i = ft_apply_rarb(stack_a, stack_b, tmp->content, 'a');
			else if (i == ft_case_rrarrb(stack_a, stack_b, tmp->content))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->content, 'a');
			else if (i == ft_case_rarrb(stack_a, stack_b, tmp->content))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->content, 'a');
			else if (i == ft_case_rrarb(stack_a, stack_b, tmp->content))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->content, 'a');
			else
				tmp = tmp->next;
		}
	}
}

int	ft_rotate_type_ab(t_list **a, t_list **b)
{
	int		i;
	t_list	*tmp;

	tmp = *a;
	while (tmp)
	{
		if (i > ft_case_rarb(a, b, tmp->content))
			i = ft_case_rarb(a, b, tmp->content);
		if (i > ft_case_rrarrb(a, b, tmp->content))
			i = ft_case_rrarrb(a, b, tmp->content);
		if (i > ft_case_rarrb(a, b, tmp->content))
			i = ft_case_rarrb(a, b, tmp->content);
		if (i > ft_case_rrarb(a, b, tmp->content))
			i = ft_case_rrarb(a, b, tmp->content);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_type_ba(t_list **a, t_list **b)
{
	int		i;
	t_list	*tmp;

	tmp = *b;
	i = ft_case_rrarrb_a(a, b, (tmp)->content);
	while (tmp)
	{
		if (i > ft_case_rarb_a(a, b, tmp->content))
			i = ft_case_rarb_a(a, b, tmp->content);
		if (i > ft_case_rrarrb_a(a, b, tmp->content))
			i = ft_case_rrarrb_a(a, b, tmp->content);
		if (i > ft_case_rarrb_a(a, b, tmp->content))
			i = ft_case_rarrb_a(a, b, tmp->content);
		if (i > ft_case_rrarb_a(a, b, tmp->content))
			i = ft_case_rrarb_a(a, b, tmp->content);
		tmp = tmp->next;
	}
	return (i);
}
