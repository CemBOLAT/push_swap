/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:38:47 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/16 16:47:06 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function calculate and decides which rotation
// combination is best to use to sort the stack. Of
// course, after rotation there is always one push
// operation is left to do which i embeded to code.
// Function is used during push from B to A.
int	ft_rotate_type_ba(t_list *a, t_list *b)
{
	int		i;
	t_list	*tmp;

	tmp = b;
	i = ft_case_rrarrb_a(a, b, b->content);
	while (tmp)
	{
		if (i > ft_case_rarb_a(a, b, tmp->content))
			i = ft_case_rarb_a(a, b, tmp->content);
		if (i > ft_case_rrarrb_a(a, b, tmp->content))
			i = ft_case_rrarrb_a(a, b, tmp->content);
		if (i > ft_case_rarrb_a(a, b, tmp->content))
			i = ft_case_rarrb_a(a, b, tmp->content);
		if (i > ft_case_rrarb_a(a, b, tmp->content))
			i = ft_case_rrarb_a(a, b, tmp->content);
		tmp = tmp->next;
	}
	return (i);
}

// This function calculate and decides which rotation
// combination is best to use to sort the stack. Of
// course, after rotation there is always one push
// operation is left to do which i embeded to code.
// Function is used during push from A to B.
int	ft_rotate_type_ab(t_list *a, t_list *b)
{
	int		i;
	t_list	*tmp;

	tmp = a;
	i = ft_case_rrarrb(a, b, a->content);
	while (tmp)
	{
		if (i > ft_case_rarb(a, b, tmp->content))
			i = ft_case_rarb(a, b, tmp->content);
		if (i > ft_case_rrarrb(a, b, tmp->content))
			i = ft_case_rrarrb(a, b, tmp->content);
		if (i > ft_case_rarrb(a, b, tmp->content))
			i = ft_case_rarrb(a, b, tmp->content);
		if (i > ft_case_rrarb(a, b, tmp->content))
			i = ft_case_rrarb(a, b, tmp->content);
		tmp = tmp->next;
	}
	return (i);
}