/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 23:36:52 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/15 00:59:40 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc < 2)
		ft_exit("Invalid argument number !\n");
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
	ft_shell_print("Sorting Started...\n", 's');
	ft_sort(stack_a, stack_b);
	ft_shell_print("Sorting FINISHED !\n", 's');

	int i = 0;
	t_list *temp;
	temp = *stack_b;
	ft_putstr_fd("GOOL : ", 1);
	ft_putnbr_fd(ft_lstsize(*stack_b), 1);
	ft_putchar_fd('\n', 1);
	while (i < ft_lstsize(*stack_b))
	{
		ft_putnbr_fd((temp)->content, 1);
		ft_putchar_fd(' ', 1);
		ft_putnbr_fd(temp->index, 1);
		ft_putchar_fd('\n', 1);
		i++;
		temp = (temp)->next;
	}
	ft_free_stacks(stack_a, stack_b);
	//system("leaks push_swap");
	return (0);
}
