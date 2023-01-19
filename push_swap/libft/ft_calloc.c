/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:52:12 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 14:52:14 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	int		i;
	size_t	k;

	i = 0;
	k = count * size;
	result = malloc(k);
	if (!result)
		return (NULL);
	while (k > 0)
	{
		((unsigned char *)result)[i] = '\0';
		i++;
		k--;
	}
	return (result);
}
