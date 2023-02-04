/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:45:30 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/04 16:51:58 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc < 2)
		ft_exit ("Invalid argument number !\n");
	ft_check_arguments(argc, argv);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	ft_fill_stack_a(stack_a, argc, argv);
	if (ft_is_sorted(stack_a))
	{
		ft_free_stacks(stack_a, stack_b);
		ft_exit("You list is already sorted !\n");
	}
	//ft_sort(stack_a, stack_b);
	ft_free_stacks(stack_a, stack_b);
	return (0);
}
