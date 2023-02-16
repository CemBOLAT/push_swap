/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:39:31 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/16 16:47:19 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function returns the last element of the stack.
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// This function returns the size of the stack.
int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// This function finds and returns the smallest number
// in the given stack.
int	ft_min(t_list *a)
{
	int		i;

	i = a->content;
	while (a)
	{
		if (a->content < i)
			i = a->content;
		a = a->next;
	}
	return (i);
}

// This function finds and returns the biggest number
// in the given stack.
int	ft_max(t_list *a)
{
	int		i;

	i = a->content;
	while (a)
	{
		if (a->content > i)
			i = a->content;
		a = a->next;
	}
	return (i);
}
