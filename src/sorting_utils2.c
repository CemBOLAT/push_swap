/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 23:17:39 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/15 00:54:29 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_index(t_list **a, int nbr)
{
	int		i;
	t_list	*tmp;

	tmp = *a;
	i = 0;
	while (tmp->content != nbr && tmp && tmp->next)
	{
		i++;
		tmp = tmp->next;
	}
	//tmp->index = 0;
	return (i);
}

int	ft_find_place_b(t_list **stack, int nbr_push)
{
	int		i;
	t_list	*tmp;
	t_list	*tmp_next;

	tmp = *stack;
	i = 1;
	if (nbr_push > (*stack)->content && nbr_push < ft_lstlast(*stack)->content)
		i = 0;
	else if (nbr_push > ft_max(stack) || nbr_push < ft_min(stack))
		i = ft_find_index(stack, ft_max(stack));
	else
	{
		tmp_next = (tmp)->next;
		while ((tmp->content < nbr_push || tmp_next->content > nbr_push) &&
			tmp && tmp->next)
		{
			tmp = tmp_next;
			tmp_next = tmp_next->next;
			i++;
		}
	}
	return (i);
}

int	ft_find_place_a(t_list **stack_a, int nbr_push)
{
	int		i;
	t_list	*tmp;
	t_list	*tmp_next;

	tmp = *stack_a;
	i = 1;
	if (nbr_push < (*stack_a)->content && nbr_push > ft_lstlast(*stack_a)->content)
		i = 0;
	else if (nbr_push > ft_max(stack_a) || nbr_push < ft_min(stack_a))
		i = ft_find_index(stack_a, ft_max(stack_a));
	else
	{
		tmp_next = (tmp)->next;
		while ((tmp->content > nbr_push || tmp_next->content < nbr_push) && tmp
			&& tmp_next->next)
		{
			tmp = tmp_next;
			tmp_next = tmp_next->next;
			i++;
		}
	}
	return (i);
}
