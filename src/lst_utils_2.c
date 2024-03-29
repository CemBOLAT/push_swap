/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:39:26 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/17 16:41:53 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_index(t_list *a, int nbr)
{
	int		i;

	i = 0;
	while (a->content != nbr)
	{
		i++;
		a = a->next;
	}
	return (i);
}

int	ft_find_place_b(t_list *stack_b, int nbr_push)
{
	int		i;
	t_list	*tmp;

	i = 1;
	if (nbr_push > stack_b->content && nbr_push < ft_lstlast(stack_b)->content)
		i = 0;
	else if (nbr_push > ft_max(&stack_b) || nbr_push < ft_min(&stack_b))
		i = ft_find_index(stack_b, ft_max(&stack_b));
	else
	{
		tmp = stack_b->next;
		while (stack_b->content < nbr_push || tmp->content > nbr_push)
		{
			stack_b = stack_b->next;
			tmp = stack_b->next;
			i++;
		}
	}
	return (i);
}

int	ft_find_place_a(t_list *stack_a, int nbr_push)
{
	int		i;
	t_list	*tmp;

	i = 1;
	if (nbr_push < stack_a->content && nbr_push > ft_lstlast(stack_a)->content)
		i = 0;
	else if (nbr_push > ft_max(&stack_a) || nbr_push < ft_min(&stack_a))
		i = ft_find_index(stack_a, ft_min(&stack_a));
	else
	{
		tmp = stack_a->next;
		while (stack_a->content > nbr_push || tmp->content < nbr_push)
		{
			stack_a = stack_a->next;
			tmp = stack_a->next;
			i++;
		}
	}
	return (i);
}
