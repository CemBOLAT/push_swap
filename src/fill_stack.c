/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:50:14 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/04 16:06:46 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_fill_stack_a(t_list **list, int c, char **v)
{
	t_list	*element;
	char	**tab;
	int		i;

	i = 0;
	if (c == 2)
		tab = ft_split(v[1], ' ');
	else
	{
		i = 1;
		tab = v;
	}
	while (tab[i])
	{
		element = ft_lstnew(ft_atoi(tab[i]));
		ft_lstadd_back(list, element);
		i++;
	}
	if (c == 2)
		ft_free_split(tab, 1);
}
