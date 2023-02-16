/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:37:15 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/16 16:47:00 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function checks if the stack is sorted.
int	ft_checksorted(t_list *stack_a)
{
	int	i;

	i = stack_a->content;
	while (stack_a)
	{
		if (i > stack_a->content)
			return (0);
		i = stack_a->content;
		stack_a = stack_a->next;
	}
	return (1);
}
