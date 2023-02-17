/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:42:32 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/17 17:14:57 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_is_sorted(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	ft_isnum(char *str)
{
	int	i;

	i = 0;
	if (*str == '-')
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_isrepeat(char **tab, int len, int k)
{
	int	i;
	int	j;

	i = k;
	while (i < len)
	{
		j = k;
		while (j < len)
		{
			if (ft_atoi(tab[i]) == ft_atoi(tab[j]) && i != j)
				ft_exit_and_free("Error", tab, k);
			j++;
		}
		if (ft_atoi(tab[i]) < MIN_INT || ft_atoi(tab[i]) > MAX_INT)
			ft_exit_and_free("Error", tab, k);
		i++;
	}
}

void	ft_check_arguments(int c, char **v)
{
	char	**tab;
	int		i;
	int		k;

	if (c == 2)
	{
		k = 0;
		tab = ft_split(v[1], ' ');
	}
	else
	{
		k = 1;
		tab = v;
	}
	i = k;
	while (tab[i])
	{
		if (!ft_isnum(tab[i]))
			ft_exit_and_free("Error", tab, k);
		i++;
	}
	ft_isrepeat(tab, i, k);
	ft_free_split(tab, k);
}
