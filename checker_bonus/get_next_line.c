/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:47:14 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/17 17:24:59 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char	*ft_read_left_to_right(int fd, char *d_line)
{
	char	*buff;
	int		rd_bytes;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	rd_bytes = 1;
	while (!ft_strnchr(d_line, '\n') && rd_bytes != 0)
	{
		rd_bytes = read(fd, buff, BUFFER_SIZE);
		if (rd_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[rd_bytes] = '\0';
		d_line = ft_strcat(d_line, buff);
	}
	free(buff);
	return (d_line);
}

char	*get_next_line(int fd)
{
	char		*current_line;
	static char	*d_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	d_line = ft_read_left_to_right(fd, d_line);
	if (!d_line)
		return (NULL);
	current_line = ft_get_line(d_line);
	d_line = ft_new_dinamic_line(d_line);
	return (current_line);
}
