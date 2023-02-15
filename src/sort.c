/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 21:36:02 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/15 00:58:53 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_long_sort(t_list **stack_a, t_list **stack_b)
{
	int	i;

	ft_step1(stack_a, stack_b);
	// ft_step2(stack_a, stack_b);
	// i = ft_find_index(stack_a, ft_min(stack_a));
	// if (i < ft_lstsize(*stack_a) - i)
	// {
	// 	while ((*stack_a)->content != ft_min(stack_a))
	// 		ft_ra(stack_a);
	// }
	// else
	// {
	// 	while ((*stack_a)->content != ft_min(stack_a))
	// 		ft_rra(stack_a);
	// }
}

void	ft_small_sort(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) == 2)
		ft_sort2(stack_a);
	else if (ft_lstsize(*stack_a) == 3)
		ft_sort3(stack_a);
}

void	ft_sort(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) <= 3)
		ft_small_sort(stack_a, stack_b);
	else
		ft_long_sort(stack_a, stack_b);
}
