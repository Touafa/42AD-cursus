/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:57:26 by otalha            #+#    #+#             */
/*   Updated: 2022/07/01 17:09:20 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	if (c == '\0')
		return ((char *)&str[ft_strlen(str)]);
	while (str[i] != '\0')
	{
		if (str[i] == (char) c)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *reserve, char *buffer)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!reserve)
	{
		reserve = (char *)malloc(1 * sizeof(char));
		reserve[0] = '\0';
	}
	if (!reserve || !buffer)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(reserve) + ft_strlen(buffer)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (reserve)
		while (reserve[++i] != '\0')
			str[i] = reserve[i];
	while (buffer[j] != '\0')
		str[i++] = buffer[j++];
	str[ft_strlen(reserve) + ft_strlen(buffer)] = '\0';
	free(reserve);
	return (str);
}

char	*ft_get_line(char *reserve)
{
	int		i;
	char	*line;

	i = 0;
	if (!reserve[i])
		return (NULL);
	while (reserve[i] && reserve[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (reserve[i] && reserve[i] != '\n')
	{
		line[i] = reserve[i];
		i++;
	}
	if (reserve[i] == '\n')
	{
		line[i] = reserve[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_new_reserve(char *reserve)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (reserve[i] && reserve[i] != '\n')
		i++;
	if (!reserve[i] || (reserve[i] == '\n' && !reserve[i + 1]))
	{
		free(reserve);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(reserve) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (reserve[i])
		str[j++] = reserve[i++];
	str[j] = '\0';
	free(reserve);
	return (str);
}
