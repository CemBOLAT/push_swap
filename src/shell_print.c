/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shell_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:44:32 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/04 17:18:37 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit_and_free(char *str, char **tab, int k)
{
	int	i;

	i = 0;
	if (ft_free_split(tab, k) == 0)
		ft_exit(str);
	while (1);
	ft_exit(str);
}

void	ft_shell_print(char *str, char cond)
{
	int	i;

	i = 0;

	if (cond == 'e')
	{
		write(1, "\033[31m", 6);
		while (str[i])
			write(1, &str[i++], 1);
		write(1, "\033[0m ", 6);
	}
	else if (cond == 'p')
	{
		write(1, "\033[33m", 6);
		while (str[i])
			write(1, &str[i++], 1);
		write(1, "\033[0m ", 6);
	}
}

void	ft_exit(char *str)
{
	write(1, "Error : ", 8);
	ft_shell_print(str, 'e');
	exit(0);
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
