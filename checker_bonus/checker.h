/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:43:06 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/17 17:24:52 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../src/push_swap.h"
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

char	*get_next_line(int fd);
char	*ft_read_left_to_right(int fd, char *d_line);
char	*ft_strnchr(char *s, int c);
size_t	ft_str_len(char *s);
char	*ft_strcat(char *d_line, char *buff);
char	*ft_get_line(char *d_line);
char	*ft_new_dinamic_line(char *d_line);
#endif
