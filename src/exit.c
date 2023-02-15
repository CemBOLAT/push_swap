/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:31:27 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/14 23:44:07 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit(char *str)
{
	write(1, "Error : ", 8);
	ft_shell_print(str, 'e');
	exit(0);
}

void	ft_exit_and_free(char *str, char **tab, int k)
{
	if (ft_free_split(tab, k) == 0)
		ft_exit(str);
	ft_exit(str);
}

int	ft_free_split(char **tab, int k)
{
	int	i;

	i = 0;
	if (k == 0)
		return (0);
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (1);
}

void	ft_free_stacks(t_list **stack_a, t_list **stack_b)
{
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
}

