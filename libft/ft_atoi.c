/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:53:27 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/03 15:44:53 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str)
{
	size_t			i;
	long			res;
	int				sign;
	size_t			sign_nbr;

	i = 0;
	res = 0;
	sign = 1;
	sign_nbr = 0;
	while ((str[i] == 32 || (str[i] >= 9 && str[i] <= 14)))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		sign_nbr++;
		i++;
	}
	if (sign_nbr > 1)
		return (0);
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - 48);
	if (sign_nbr == 1 && sign == -1)
		return (-res);
	return (res);
}
