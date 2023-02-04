/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:25:17 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/04 18:30:54 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp_a;
	t_list	*temp_b;

	if (ft_lstsize(*stack_b) < 1)
		return (1);
	temp_a = *stack_a;
	temp_b = *stack_b;
	*stack_b = temp_b->next;
	temp_b->next = temp_a;
	*stack_a = temp_b;
	ft_shell_print("pa", 'p');
	return (0);
}

int	ft_pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp_a;
	t_list	*temp_b;

	if (ft_lstsize(*stack_a) < 1)
		return (1);
	temp_a = *stack_a;
	temp_b = *stack_b;
	*stack_a = temp_a->next;
	temp_a->next = temp_b;
	*stack_b = temp_a;
	ft_shell_print("pb", 'p');
	return (0);
}

// int main()
// {
//     t_list	**stack_a = NULL;
//     t_list	**stack_b = NULL;

//     stack_a = (t_list **)malloc(sizeof(t_list *));
//     *stack_a = (t_list *)malloc(sizeof(t_list));
//     (*stack_a)->content = 5;
//     (*stack_a)->next = (t_list *)malloc(sizeof(t_list));
//     (*stack_a)->next->content = 3;
//     (*stack_a)->next->next = NULL;
//     stack_b = (t_list **)malloc(sizeof(t_list *));
//     *stack_b = (t_list *)malloc(sizeof(t_list));
//     (*stack_b)->content = 2;
//     (*stack_b)->next = (t_list *)malloc(sizeof(t_list));
//     (*stack_b)->next->content = 4;
//     (*stack_b)->next->next = NULL;
//     printf("1-> A : %d \n1-> B : %d\n", (*stack_a)->content, (*stack_b)->content);
//     ft_pa(stack_a, stack_b);
//     printf("1-> A : %d \n1-> B : %d\n", (*stack_a)->content, (*stack_b)->content);
// 	ft_pb(stack_a, stack_b);
//     printf("1-> A : %d \n1-> B : %d", (*stack_a)->content, (*stack_b)->content);
// }
