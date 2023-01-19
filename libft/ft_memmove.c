/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:16:14 by otalha            #+#    #+#             */
/*   Updated: 2022/06/12 15:02:54 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ds;
	char	*sr;

	ds = (char *)dst;
	sr = (char *)src;
	if (sr == ds)
		return (dst);
	if (sr < ds)
	{
		while (len--)
		{
			*(ds + len) = *(sr + len);
		}
		return (dst);
	}
	else
	{
		while (len--)
		{
		*ds++ = *sr++;
		}
	}
	return (dst);
}
