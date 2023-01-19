/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 19:11:05 by otalha            #+#    #+#             */
/*   Updated: 2022/06/04 19:18:51 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	ft_unalloc(char *s, int i)
{
	while (i >= 0)
	{
		free(&s[i]);
		i--;
	}
	free(s);
}

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && (s[i] != c))
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

static char	*ft_copystr(char const *s, char c)
{
	size_t	i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	str = (char *)ft_calloc((i + 1), sizeof(char));
	if (!str)
		return (0);
	ft_memcpy(str, s, i);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**split;

	if (!s)
		return (0);
	count = ft_wordcount(s, c);
	split = (((char **) malloc (sizeof(char *) * (count + 1))));
	if (!split)
		return (0);
	i = 0;
	while (i < count)
	{
		while (*s == c)
			s++;
		split[i] = ft_copystr(s, c);
		if (!split)
			ft_unalloc(*split, i);
		s += ft_strlen(split[i]);
		i++;
	}
	split[i] = 0;
	return (split);
}

// int main()
// {
// 	int	i;
// 	char	a[] = "   My name  is about  27 years";
// 	char	**split = ft_split(a, ' ');
// 	while (split[i])
// 	{
// 		printf("%s \n", split[i]);
// 		i++;
// 	}
// }