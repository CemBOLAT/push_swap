/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  nbrases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:nbrbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*  nbrreated: 2023/02/09 22:43:20 bynbrbolat            #+#    #+#             */
/*   Updated: 2023/02/09 22:51:37 bynbrbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_rarb(t_list **a, t_list **b, int c)
{
	int	i;
	t_list	*tmp_a;
	t_list	*tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	i = ft_find_place_b(b, c);
	if (i < ft_find_index(a, c))
		i = ft_find_index(a, c);
	return (i);
}

int	ft_case_rrarrb(t_list **a, t_list **b, int c)
{
	int	i;
	t_list	*tmp_a;
	t_list	*tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	i = 0;
	if (ft_find_place_b(&tmp_b, c))
		i = ft_lstsize(tmp_b) - ft_find_place_b(&tmp_b, c);
	if ((i < (ft_lstsize(tmp_a) - ft_find_index(&tmp_a, c))) && ft_find_index(&tmp_a, c))
		i = ft_lstsize(tmp_a) - ft_find_index(&tmp_a, c);
	return (i);
}

int	ft_case_rrarb(t_list **a, t_list **b, int c)
{
	int	i;
	t_list	*tmp_a;
	t_list	*tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	i = 0;
	if (ft_find_index(&tmp_a, c))
		i = ft_lstsize(tmp_a) - ft_find_index(&tmp_a, c);
	i = ft_find_place_b(&tmp_b, c) + i;
	return (i);
}

int	ft_case_rarrb(t_list **a, t_list **b, int c)
{
	int	i;
	t_list	*tmp_a;
	t_list	*tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	i = 0;
	if (ft_find_place_b(&tmp_b, c))
		i = ft_lstsize(tmp_b) - ft_find_place_b(&tmp_b, c);
	i = ft_find_index(&tmp_a, c) + i;
	return (i);
}
