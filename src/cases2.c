/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:53:10 by yogun             #+#    #+#             */
/*   Updated: 2023/02/10 21:39:43 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function calculates the required amount of rotation.
// Calculations are done for ra+rb case.
int	ft_case_rarb_a(t_list **a, t_list **b, int c)
{
	int	i;
	t_list	**tmp_a;
	t_list	**tmp_b;

	tmp_a = a;
	tmp_b = b;
	i = ft_find_place_a(tmp_a, c);
	if (i < ft_find_index(tmp_b, c))
		i = ft_find_index(tmp_b, c);
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for rra+rrb case.
int	ft_case_rrarrb_a(t_list **a, t_list **b, int c)
{
	int	i;
	t_list	**tmp_a;
	t_list	**tmp_b;

	tmp_a = a;
	tmp_b = b;
	i = 0;
	if (ft_find_place_a(tmp_a, c))
		i = ft_lstsize(*tmp_a) - ft_find_place_a(tmp_a, c);
	if ((i < (ft_lstsize(*tmp_b) - ft_find_index(tmp_b, c))) && ft_find_index(tmp_b, c))
		i = ft_lstsize(*tmp_b) - ft_find_index(tmp_b, c);
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for ra+rrb case.
int	ft_case_rarrb_a(t_list **a, t_list **b, int c)
{
	int	i;
	t_list	**tmp_a;
	t_list	**tmp_b;

	tmp_a = a;
	tmp_b = b;
	i = 0;
	if (ft_find_index(tmp_b, c))
		i = ft_lstsize(*tmp_b) - ft_find_index(tmp_b, c);
	i = ft_find_place_a(tmp_a, c) + i;
	return (i);
}

// This function calculates the required amount of rotation.
// Calculations are done for rra+rb case.
int	ft_case_rrarb_a(t_list **a, t_list **b, int c)
{
	int	i;
	t_list	**tmp_a;
	t_list	**tmp_b;

	tmp_a = a;
	tmp_b = b;
	i = 0;
	if (ft_find_place_a(tmp_a, c))
		i = ft_lstsize(*tmp_a) - ft_find_place_a(tmp_a, c);
	i = ft_find_index(tmp_b, c) + i;
	return (i);
}
