/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:49:32 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/04 14:35:52 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*temp;

	if (!new)
		return ;
	if (!*list)
	{
		*list = new;
		return ;
	}
	temp = ft_lstlast(*list);
	temp->next = new;
}
