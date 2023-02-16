/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:39:31 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/16 17:45:33 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function finds and returns the smallest number
// in the given stack.
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

// This function finds and returns the biggest number
// in the given stack.
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
