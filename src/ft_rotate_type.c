/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:38:47 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/17 16:42:44 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate_type_ba(t_list *a, t_list *b)
{
	int		i;
	t_list	*tmp;

	tmp = b;
	i = ft_case_rrarrb(a, b, b->content, 2);
	while (tmp && i != 0)
	{
		if (i > ft_case_rarb(a, b, tmp->content, 2))
			i = ft_case_rarb(a, b, tmp->content, 2);
		if (i > ft_case_rrarrb(a, b, tmp->content, 2))
			i = ft_case_rrarrb(a, b, tmp->content, 2);
		if (i > ft_case_rarrb(a, b, tmp->content, 2))
			i = ft_case_rarrb(a, b, tmp->content, 2);
		if (i > ft_case_rrarb(a, b, tmp->content, 2))
			i = ft_case_rrarb(a, b, tmp->content, 2);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_type_ab(t_list *a, t_list *b)
{
	int		i;
	t_list	*tmp;

	tmp = a;
	i = ft_case_rrarrb(a, b, a->content, 1);
	while (tmp && i != 0)
	{
		if (i > ft_case_rarb(a, b, tmp->content, 1))
			i = ft_case_rarb(a, b, tmp->content, 1);
		if (i > ft_case_rrarrb(a, b, tmp->content, 1))
			i = ft_case_rrarrb(a, b, tmp->content, 1);
		if (i > ft_case_rarrb(a, b, tmp->content, 1))
			i = ft_case_rarrb(a, b, tmp->content, 1);
		if (i > ft_case_rrarb(a, b, tmp->content, 1))
			i = ft_case_rrarb(a, b, tmp->content, 1);
		tmp = tmp->next;
	}
	return (i);
}
