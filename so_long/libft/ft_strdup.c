/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:56:10 by otalha            #+#    #+#             */
/*   Updated: 2022/09/17 18:56:13 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		len_s1;

	len_s1 = ft_strlen(s1);
	dest = malloc((len_s1 + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s1, len_s1);
	dest[len_s1] = '\0';
	return (dest);
}
