/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:48:02 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/03 18:43:30 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isnum(char *str)
{
	int		sign_nbr;
	int		i;

	i = 0;
	sign_nbr = 0;
	if (str[0] == '-' || str[0] == '+')
		sign_nbr = 1;
	while (str[i] && sign_nbr <= 1)
	{
		if (!ft_isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_isrepeat(char **tab, int len, int k)
{
	int	i;

	if (k == 0)
		i = 1;
	else
		i = 0;
	while (ft_atoi(tab[len]) != ft_atoi(tab[i]) &&
		i < len)
		i++;
	if (i == len)
		return (0);
	return (1);
}

void	ft_check_arg2(char **tab, int i, int k)
{
	long	nbr;

	while (tab[i] != NULL)
	{
		nbr = ft_atoi(tab[i]);
		if (ft_isnum(tab[i]))
			ft_exit_and_free("You must enter number as ARGUMENT !", tab, k);
		if (nbr > MAX_INT || nbr < MIN_INT)
			ft_exit_and_free("You must enter INTEGER NUMBER !", tab, k);
		if (ft_isrepeat(tab, i, k))
			ft_exit_and_free("You must enter UNIQUE NUMBERS !", tab, k);
		i++;
	}
}

void	ft_check_arguments(int argc, char **argv)
{
	int		i;
	char	**tab;
	int		k;

	i = 0;
	tab = NULL;
	if (argc == 2)
	{
		k = 1;
		tab = ft_split(argv[1], ' ');
	}
	else
	{
		k = 0;
		i = 1;
		tab = argv;
	}
	ft_check_arg2(tab, i, k);
	if (k == 1)
	{
		while (tab[i])
		{
			free(tab[i]);
			i++;
		}
		free(tab);
	}

}
