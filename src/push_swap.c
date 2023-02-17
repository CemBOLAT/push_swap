/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:36:31 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/17 16:44:20 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		ft_exit("Error");
	}

	ft_sort(a, b);
	//int i = 0;
	// t_list *temp;
	// temp = *a;
	// ft_putstr_fd("GOOL : ", 1);
	// ft_putnbr_fd(ft_lstsize(*a), 1);
	// ft_putchar_fd('\n', 1);
	// while (i < ft_lstsize(*a))
	// {
	// 	ft_putnbr_fd((temp)->content, 1);
	// 	ft_putchar_fd(' ', 1);
	// 	ft_putnbr_fd(temp->index, 1);
	// 	ft_putchar_fd('\n', 1);
	// 	i++;
	// 	temp = (temp)->next;
	// }
	ft_free_stacks(a, b);
	// system("leaks push_swap");

}
