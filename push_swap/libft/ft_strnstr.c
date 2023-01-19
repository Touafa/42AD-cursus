/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:57:59 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 14:58:01 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] != '\0' && i < len)
	{
		k = 0;
		while (haystack[i + k] != '\0'
			&& haystack[i + k] == needle[k] && (i + k) < len)
		{
			if (needle[k + 1] == '\0')
			{
				return ((char *)&haystack[i]);
			}
			++k;
		}
		++i;
	}
	return (0);
}
