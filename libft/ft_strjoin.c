/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:53:22 by otalha            #+#    #+#             */
/*   Updated: 2022/06/04 19:23:14 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (0);
	i = 0;
	new_str = (char *)malloc((ft_strlen(s1)
				+ ft_strlen(s2)) * sizeof(char) + 1);
	if (!new_str)
		return (0);
	while (s1[i])
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// int main() 
// {
//   char s1[] = "wafa";
//   char s2[] = "talha";
//   printf("%s", ft_strjoin(s1, s2));

//   return 0;
// }
