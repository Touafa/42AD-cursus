/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:13:27 by otalha            #+#    #+#             */
/*   Updated: 2022/05/22 15:52:52 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = p;
	while (len > 0)
	{
		*ptr = c;
		ptr++;
		len--;
	}
	return (p);
}
