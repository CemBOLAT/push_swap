/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:39:31 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/17 16:42:53 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_list **a)
{
	int		i;
	t_list	*temp;

	temp = *a;
	i = temp->content;
	while (temp)
	{
		if (temp->content < i)
			i = temp->content;
		temp = temp->next;
	}
	return (i);
}

int	ft_min_index(t_list **a)
{
	int		i;
	t_list	*temp;

	temp = *a;
	i = temp->index;
	while (temp)
	{
		if (temp->index < i)
			i = temp->index;
		temp = temp->next;
	}
	return (i);
}

int	ft_max(t_list **a)
{
	int		i;
	t_list	*temp;

	temp = *a;
	i = temp->content;
	while (temp)
	{
		if (temp->content > i)
			i = temp->content;
		temp = temp->next;
	}
	return (i);
}
