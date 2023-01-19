/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:15:25 by otalha            #+#    #+#             */
/*   Updated: 2022/06/11 18:50:26 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char			*d;
	unsigned const char		*s;
	size_t					i;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
