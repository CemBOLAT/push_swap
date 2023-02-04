/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:41:25 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/04 15:59:58 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*res;

	res = (t_list *)malloc(sizeof(res));
	if (!res)
		return (NULL);
	res->content = content;
	res->next = NULL;
	return (res);
}
