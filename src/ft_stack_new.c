/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:39:21 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/16 16:39:23 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Creates new stack node with given number.
t_list	*ft_list_new(int content)
{
	t_list	*new;

	new = malloc(sizeof (t_list));
	if (!new)
		ft_error();
	new->content = content;
	new->next = NULL;
	return (new);
}
