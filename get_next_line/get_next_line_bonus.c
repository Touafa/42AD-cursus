/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:05:43 by otalha            #+#    #+#             */
/*   Updated: 2022/07/01 19:45:19 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_read_reserve(int fd, char *reserve)
{
	char	*buffer;
	int		n_bytes;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	n_bytes = 1;
	while (ft_strchr(reserve, '\n') == 0 && n_bytes != 0)
	{
		n_bytes = read(fd, buffer, BUFFER_SIZE);
		if (n_bytes == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[n_bytes] = '\0';
		reserve = ft_strjoin(reserve, buffer);
	}
	free(buffer);
	return (reserve);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*reserve[4096];

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE >= 2147483647)
		return (0);
	reserve[fd] = ft_read_reserve(fd, reserve[fd]);
	if (!reserve[fd])
		return (NULL);
	line = ft_get_line(reserve[fd]);
	reserve[fd] = ft_new_reserve(reserve[fd]);
	return (line);
}
