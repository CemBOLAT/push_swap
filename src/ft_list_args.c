/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:38:01 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/16 16:45:57 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// While arguments are valid, we start to add them
// into stack here one by one with while loop.
// Atoi takes the number and turn it into an integer
// value where we can make math operations.
// With stack new we create a new node for the current
// argument without linking it to list.
// We make linking stage in ft_add_back call.
void	list_args(char **argv, t_list **stack_a)
{
	long	i;

	i = 1;
	while (argv[i] != NULL)
	{
		ft_add_back(stack_a, ft_list_new(ft_atoi(argv[i])));
		i++;
	}
}
