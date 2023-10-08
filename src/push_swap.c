/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:36:31 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/09 01:11:01 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	t_list	**a;
	t_list	**b;

	if (argc < 2)
		ft_exit("Error");
	ft_check_arguments(argc, argv);
	a = (t_list **)malloc(sizeof(t_list));
	b = (t_list **)malloc(sizeof(t_list));
	*a = NULL;
	*b = NULL;
	ft_fill_stack_a(a, argc, argv);
	if (ft_is_sorted(a))
	{
		ft_free_stacks(a, b);
		exit(0);
	}
	ft_sort(a, b);
	ft_free_stacks(a, b);
}
