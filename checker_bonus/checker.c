/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:10:00 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/17 17:47:23 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char	*ft_check(t_list **a, t_list **b, char *line)
{
	if (ft_strncmp(line, "sa\n", 3) && ft_strlen(line) == 3)
		ft_sa(a);
	else if (ft_strncmp(line, "sb\n", 3) && ft_strlen(line) == 3)
		ft_sb(b);
	else if (ft_strncmp(line, "ss\n", 3) && ft_strlen(line) == 3)
		ft_ss(a, b);
	else if (ft_strncmp(line, "pa\n", 3) && ft_strlen(line) == 3)
		ft_pa(a, b);
	else if (ft_strncmp(line, "pb\n", 3) && ft_strlen(line) == 3)
		ft_pb(a, b);
	else if (ft_strncmp(line, "ra\n", 3) && ft_strlen(line) == 3)
		ft_ra(a);
	else if (ft_strncmp(line, "rb\n", 3) && ft_strlen(line) == 3)
		ft_rb(b);
	else if (ft_strncmp(line, "rr\n", 3) && ft_strlen(line) == 3)
		ft_rr(a, b);
	else if (ft_strncmp(line, "rra\n", 4) && ft_strlen(line) == 4)
		ft_rra(a);
	else if (ft_strncmp(line, "rrb\n", 4) && ft_strlen(line) == 4)
		ft_rrb(b);
	else if (ft_strncmp(line, "rrr\n", 4) && ft_strlen(line) == 4)
		ft_rrr(a, b);
	else
		ft_exit("Error");
	return (get_next_line(0));
}

void	ft_control(t_list **a, t_list **b, char *line)
{
	char	*tmp;

	while (line && *line != '\n')
	{
		tmp = line;
		line = ft_check(a, b, line);
		free(tmp);
	}
	if(ft_lstsize(*b) != 0)
		ft_putendl_fd("KOad", 1);
	else if (ft_is_sorted((a)) == 0)
		ft_putendl_fd("KOd", 1);
	else
		ft_putendl_fd("OK", 1);
	free(line);
}

int	main(int argc, char **argv)
{
	t_list	**a;
	t_list	**b;
	char	*line;
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
	line = get_next_line(0);
	if (!line && !ft_is_sorted((a)))
	{
		ft_free_stacks(a, b);
		ft_putendl_fd("KOda", 1);
	}
	else if (!line && ft_is_sorted((a)))
	{
		ft_free_stacks(a, b);
		ft_putendl_fd("OK", 1);
	}
	else
		ft_control(a, b, line);
	ft_free_stacks(a, b);
	return (0);
}
