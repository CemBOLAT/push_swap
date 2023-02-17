/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:40:13 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/17 16:21:28 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_rarb(t_list *a, t_list *b, int c, int step)
{
	int	i;

	if (step == 1)
	{
		i = ft_find_place_b(b, c);
		if (i < ft_find_index(a, c))
			i = ft_find_index(a, c);
	}
	else if (step == 2)
	{
		i = ft_find_place_a(a, c);
		if (i < ft_find_index(b, c))
			i = ft_find_index(b, c);
	}
	return (i);
}

int	ft_case_rrarrb(t_list *a, t_list *b, int c, int step)
{
	int	i;

	i = 0;
	if (step == 1)
	{
		if (ft_find_place_b(b, c))
			i = ft_lstsize(b) - ft_find_place_b(b, c);
		if ((i < (ft_lstsize(a) - ft_find_index(a, c))) && ft_find_index(a, c))
			i = ft_lstsize(a) - ft_find_index(a, c);
	}
	else if (step == 2)
	{
		if (ft_find_place_a(a, c))
			i = ft_lstsize(a) - ft_find_place_a(a, c);
		if ((i < (ft_lstsize(b) - ft_find_index(b, c))) && ft_find_index(b, c))
			i = ft_lstsize(b) - ft_find_index(b, c);
	}
	return (i);
}

int	ft_case_rrarb(t_list *a, t_list *b, int c, int step)
{
	int	i;

	i = 0;
	if (step == 1)
	{
		if (ft_find_index(a, c))
			i = ft_lstsize(a) - ft_find_index(a, c);
		i = ft_find_place_b(b, c) + i;
	}
	else if (step == 2)
	{
		if (ft_find_place_a(a, c))
			i = ft_lstsize(a) - ft_find_place_a(a, c);
		i = ft_find_index(b, c) + i;
	}
	return (i);
}

int	ft_case_rarrb(t_list *a, t_list *b, int c, int step)
{
	int	i;

	i = 0;
	if (step == 1)
	{
		if (ft_find_place_b(b, c))
			i = ft_lstsize(b) - ft_find_place_b(b, c);
		i = ft_find_index(a, c) + i;
	}
	else if (step == 2)
	{
		if (ft_find_index(b, c))
			i = ft_lstsize(b) - ft_find_index(b, c);
		i = ft_find_place_a(a, c) + i;
	}
	return (i);
}
