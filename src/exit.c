/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:30:34 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/16 12:30:34 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(char *str)
{
	ft_putendl_fd(str, 1);
	exit(0);
}

void	ft_exit_and_free(char *str, char **tab, int k)
{
	ft_free_split(tab, k);
	ft_exit(str);
}

void	ft_free_split(char **tab, int k)
{
	int	i;

	i = 0;
	if (k == 0)
	{
		while (tab[i])
		{
			free(tab[i]);
			i++;
		}
		free(tab);
	}
}

void	ft_free_stacks(t_list **stack_a, t_list **stack_b)
{
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
}
