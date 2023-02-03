/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shell_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:44:32 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/03 18:41:43 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit_and_free(char *str, char **tab, int k)
{
	int	i;

	i = 0;
	if (k == 0)
		ft_exit(str);
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	ft_exit(str);
}

void	ft_shell_print(char *str)
{
	int	i;

	i = 0;
	write(1, "\033[31m", 6);
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\033[0m ", 6);
}

void	ft_exit(char *str)
{
	write(1, "Error : ", 8);
	ft_shell_print(str);
	exit(0);
}
