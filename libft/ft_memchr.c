/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:24:08 by otalha            #+#    #+#             */
/*   Updated: 2022/05/22 18:30:04 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	c1;

	c1 = (unsigned char)c;
	s = (unsigned char *)str;
	while (n--)
	{
		if (*s == c1)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
