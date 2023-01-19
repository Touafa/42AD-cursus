/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:58:03 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 14:58:06 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;
	int		i;

	result = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			result = &((char *)s)[i];
		i++;
	}
	if (c == '\0')
		result = &((char *)s)[i];
	return (result);
}
