/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:40:02 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/17 15:55:17 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list **a)
{
	t_list	*tmp;

	if (ft_lstsize(*a) < 2)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
	ft_putendl_fd("sa", 1);
}

void	ft_sb(t_list **b)
{
	t_list	*tmp;

	if (ft_lstsize(*b) < 2)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	ft_putendl_fd("sb", 1);
}

void	ft_ss(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (ft_lstsize(*a) < 2 || ft_lstsize(*b) < 2)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	ft_putendl_fd("ss", 1);
}
