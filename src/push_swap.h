/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:43:06 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/16 17:25:39 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# define MAX_INT 2147483647
# define MIN_INT -2147483648

// ----------------------exit functions----------------------
void	ft_exit(char *str);
void	ft_exit_and_free(char *str, char **tab, int k);
void	ft_free_split(char **tab, int k);
void	ft_free_stacks(t_list **stack_a, t_list **stack_b);
// ----------------------check args----------------------
int		ft_is_sorted(t_list **stack);
int		ft_isnum(char *str);
void	ft_isrepeat(char **tab, int len, int k);
void	ft_check_arguments(int argc, char **argv);
// ----------------------shell print----------------------
void	ft_shell_print(char *str, char cond);
// ----------------------fill stacks----------------------
void	ft_fill_stack_a(t_list **list, int c, char **v);
void	ft_fill_index(t_list **stack_a);
//----------------------sorting algoritm----------------------
void	ft_sort(t_list **stack_a, t_list **stack_b);
//				---------processes---------
//						---swap---
void	ft_sa(t_list **stack_a);
void		ft_sb(t_list **stack_b);
void		ft_ss(t_list **stack_a, t_list **stack_b);
//						---push---
void		ft_pa(t_list **stack_a, t_list **stack_b);
void		ft_pb(t_list **stack_a, t_list **stack_b);
//						---rotate---
void		ft_ra(t_list **stack_a);
void		ft_rb(t_list **stack_b);
void		ft_rr(t_list **stack_a, t_list **stack_b);
//					---reverse-rotate---
void		ft_rra(t_list **stack_a);
void		ft_rrb(t_list **stack_b);
void		ft_rrr(t_list **stack_a, t_list **stack_b);
//---------------------processes end--------------------------
//				---------short sorting---------
void	ft_small_sort(t_list **stack_a);
void	ft_sort2(t_list **stack_a);
void	ft_sort3(t_list **stack_a);
// void	ft_sort4(t_list **stack_a, t_list **stack_b, int i);
// void	ft_sort5(t_list **stack_a, t_list **stack_b, int i);
// 				---------long sorting---------
void	ft_long_sort(t_list **stack_a, t_list **stack_b);
//					---steps----
void	ft_step1(t_list **stack_a, t_list **stack_b);
void	ft_step2(t_list **stack_a, t_list **stack_b);
//--------------------steps end-----------------------------
//		------------sorting ulilts-----------------
int		ft_min(t_list **stack);
int		ft_max(t_list **stack);
void	ft_push_b_till_3(t_list **stack_a, t_list **stack_b);
int		ft_rotate_type_ab(t_list *a, t_list *b);
int		ft_rotate_type_ba(t_list *a, t_list *b);
int		ft_find_place_a(t_list *stack, int nbr_push);
int		ft_find_place_b(t_list *stack, int nbr_push);
int		ft_find_index(t_list *a, int nbr);
int		ft_min_index(t_list *stack);
//				-----cases-----
int		ft_case_rrarrb(t_list *stack_a, t_list *stack_b, int nbr);
int		ft_case_rrarrb_a(t_list *stack_a, t_list *stack_b, int nbr);
int		ft_case_rarb(t_list *a, t_list *b, int nbr);
int		ft_case_rarb_a(t_list *a, t_list *b, int nbr);
int		ft_case_rarrb(t_list *a, t_list *b, int nbr);
int		ft_case_rarrb_a(t_list *a, t_list *b, int nbr);
int		ft_case_rrarb(t_list *a, t_list *b, int nbr);
int		ft_case_rrarb_a(t_list *a, t_list *b, int nbr);
//---------------------cases end-------------------------
//				-----applies-----
int		ft_apply_rarrb(t_list **a, t_list **b, int c, char s);
int		ft_apply_rrarb(t_list **a, t_list **b, int c, char s);
int		ft_apply_rrarrb(t_list **a, t_list **b, int c, char s);
int		ft_apply_rarb(t_list **a, t_list **b, int c, char s);
//---------------------applies end-------------------------

#endif
