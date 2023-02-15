/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sheel_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:52:31 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/11 00:15:14 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_shell_print(char *str, char cond)
{
	int	i;

	i = 0;
	if (cond == 'e')
	{
		write(1, "\033[31m", 6);
		while (str[i])
			write(1, &str[i++], 1);
		write(1, "\033[0m", 5);
	}
	else if (cond == 'p')
	{
		write(1, "\033[33m", 6);
		while (str[i])
			write(1, &str[i++], 1);
		write(1, "\033[0m", 5);
	}
	else if (cond == 's')
	{
		write(1, "\033[32m", 6);
		while (str[i])
			write(1, &str[i++], 1);
		write(1, "\033[0m", 5);
	}
}
