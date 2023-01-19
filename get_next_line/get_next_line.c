/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:02:40 by otalha            #+#    #+#             */
/*   Updated: 2022/07/05 11:07:54 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	static char	*reserve;

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE >= 2147483647)
		return (0);
	reserve = ft_read_reserve(fd, reserve);
	if (!reserve)
		return (NULL);
	line = ft_get_line(reserve);
	reserve = ft_new_reserve(reserve);
	return (line);
}
