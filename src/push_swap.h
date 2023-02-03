/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:43:06 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/03 18:50:01 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# define MAX_INT 2147483647
# define MIN_INT -2147483648

void	ft_shell_print(char *str);
void	ft_exit(char *str);
void	ft_check_arguments(int argc, char **argv);
void	ft_exit_and_free(char *str, char **tab, int k);
void	ft_fill_stack_a(t_list **list, int c, char **v);

#endif
