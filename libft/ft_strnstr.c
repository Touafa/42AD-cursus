/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:38:01 by otalha            #+#    #+#             */
/*   Updated: 2022/06/12 17:38:38 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	a;
	size_t	b;
	char	*m;

	m = (char *)h;
	a = 0;
	if (!*n)
		return ((char *)h);
	while (h[a] != '\0' && a < len)
	{
		b = 0;
		while (h[a + b] == n[b] && n[b] != '\0' && a + b < len)
		{
			b++;
		}
		if (b == ft_strlen(n))
			return (&m[a]);
		a++;
	}
	return (NULL);
}
