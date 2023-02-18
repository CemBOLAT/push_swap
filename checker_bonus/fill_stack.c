/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:56:25 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/19 00:25:03 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_fill_stack_a(t_list **list, int c, char **v)
{
	t_list	*element;
	char	**tab;
	int		i;

	i = 0;
	if (c == 2)
		tab = ft_split(v[1], ' ');
	else
	{
		i = 1;
		tab = v;
	}
	while (tab[i])
	{
		element = ft_lstnew(ft_atoi(tab[i]));
		ft_lstadd_back(list, element);
		i++;
	}
	if (c == 2)
		ft_free_split(tab, 0);
	ft_fill_index(list);
}

void	ft_fill_index_3(t_list **stack_a, int *arr)
{
	int		i;
	int		j;
	t_list	*temp;

	temp = *stack_a;
	i = 0;
	while (i < ft_lstsize(*stack_a))
	{
		j = 0;
		while (j < ft_lstsize(*stack_a))
		{
			if (arr[j] == temp->content)
			{
				temp->index = j;
				break ;
			}
			j++;
		}
		temp = temp->next;
		i++;
	}
	free(arr);
}

void	ft_fill_index_2(t_list **stack_a, int *arr)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < ft_lstsize(*stack_a))
	{
		j = 0;
		while (j < ft_lstsize(*stack_a) - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	ft_fill_index_3(stack_a, arr);
}

void	ft_fill_index(t_list **stack_a)
{
	int		*arr;
	int		i;
	t_list	*temp;

	temp = *stack_a;
	i = 0;
	arr = (int *)malloc(sizeof(int) * (ft_lstsize(*stack_a)));
	while (i < ft_lstsize(*stack_a))
	{
		arr[i] = temp->content;
		temp = temp->next;
		i++;
	}
	ft_fill_index_2(stack_a, arr);
}
