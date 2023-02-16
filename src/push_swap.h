/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 18:18:24 by yogun             #+#    #+#             */
/*   Updated: 2023/02/16 16:45:32 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include "../libft/libft.h"

void		list_args(char **argv, t_list **stack_a);
void		ft_add_back(t_list **stack, t_list *stack_new);
t_list		*ft_list_new(int content);
int			check_args(char **argv);
void		alpha_check(char **argv);
int			check_error(char **argv, int i, int j);
int			ft_checkdup(t_list *a);
int			ft_isalpha(int c);
int			sign(int c);
int			digit(int c);
int			space(int c);
void		ft_error(void);
void		ft_free(t_list **lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_ra(t_list **a, int j);
void		ft_rb(t_list **b, int j);
void		ft_sa(t_list **a, int j);
void		ft_pa(t_list **a, t_list **b, int j);
void		ft_pb(t_list **stack_a, t_list **stack_b, int j);
void		ft_rra(t_list **a, int j);
void		ft_ss(t_list **a, t_list **b, int j);
void		ft_rr(t_list **a, t_list **b, int j);
void		ft_rrr_sub(t_list **b, int j);
void		ft_rrr(t_list **a, t_list **b, int j);
t_list		*ft_lstlast(t_list *lst);
int			ft_lstsize(t_list *lst);
int			ft_min(t_list *a);
int			ft_max(t_list *a);
int			ft_find_index(t_list *a, int nbr);
int			ft_find_place_b(t_list *stack_b, int nbr_push);
int			ft_find_place_a(t_list *a, int nbr);
void		ft_sort(t_list **stack_a);
int			ft_checksorted(t_list *stack_a);
void		ft_sort_big(t_list **stack_a);
void		ft_sort_three(t_list **stack_a);
t_list		*ft_parse(int argc, char **argv);
t_list		*ft_parse_args_quoted(char **argv);
void		ft_freestr(char **lst);
int			ft_case_rarb_a(t_list *a, t_list *b, int c);
int			ft_case_rrarrb_a(t_list *a, t_list *b, int c);
int			ft_case_rarrb_a(t_list *a, t_list *b, int c);
int			ft_case_rrarb_a(t_list *a, t_list *b, int c);
int			ft_case_rarb(t_list *a, t_list *b, int c);
int			ft_case_rrarrb(t_list *a, t_list *b, int c);
int			ft_case_rrarb(t_list *a, t_list *b, int c);
int			ft_case_rarrb(t_list *a, t_list *b, int c);
int			ft_rotate_type_ab(t_list *a, t_list *b);
int			ft_rotate_type_ba(t_list *a, t_list *b);
int			ft_apply_rarb(t_list **a, t_list **b, int c, char s);
int			ft_apply_rrarrb(t_list **a, t_list **b, int c, char s);
int			ft_apply_rrarb(t_list **a, t_list **b, int c, char s);
int			ft_apply_rarrb(t_list **a, t_list **b, int c, char s);
void		ft_rrb(t_list **b, int j);
void		ft_check_sub(t_list **a, t_list **b, char *line);
char		*ft_check(t_list **a, t_list **b, char *line);
void		ft_checker_sub(t_list **a, t_list **b, char *line);
t_list		*ft_process(int argc, char **argv);
void		ft_sb(t_list **b, int j);
void		algorithm(int argc, char **argv);
void		ft_sort_b_till_3(t_list **stack_a, t_list **stack_b);
t_list		*ft_sub_process(char **argv);
void		ft_error_ch(void);

#endif
