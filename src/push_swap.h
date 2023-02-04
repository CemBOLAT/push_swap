/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:43:06 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/04 18:48:15 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# define MAX_INT 2147483647
# define MIN_INT -2147483648

void	ft_exit(char *str);
int		ft_check_arguments(int argc, char **argv);
void	ft_exit_and_free(char *str, char **tab, int k);
void	ft_fill_stack_a(t_list **list, int c, char **v);
int		ft_free_split(char **tab, int k);
int		ft_is_sorted(t_list **stack_a);
int		ft_is_sorted(t_list **stack);
void	ft_free_stacks(t_list **stack_a, t_list **stack_b);
void	ft_sort(t_list **stack_a, t_list **stack_b);
void	ft_small_sort(t_list **stack_a, t_list **stack_b);
void	ft_long_sort(t_list **stack_a, t_list **stack_b);
void	ft_shell_print(char *str, char cond);
int		ft_sb(t_list **stack_b);
int		ft_sa(t_list **stack_a);
int		ft_ss(t_list **stack_a, t_list **stack_b);
int		ft_ra(t_list **stack_a);
int		ft_rb(t_list **stack_b);
int		ft_rr(t_list **stack_a, t_list **stack_b);
int		ft_reverse(t_list **stack);
int		ft_rra(t_list **stack_a);
int		ft_rrb(t_list **stack_a);
int	ft_rrr(t_list **stack_a, t_list **stack_b);

#endif
