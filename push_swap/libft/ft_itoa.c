/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:54:06 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 14:54:10 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_num(int n)
{
	int	i;

	i = 1;
	while (n != 0)
	{
		n /= 10;
		if (n != 0)
			i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		neg;
	int		number;
	char	*num_str;

	neg = 0;
	number = count_num(n);
	if (n < 0)
		neg = 1;
	num_str = malloc((neg + number + 1) * sizeof(char));
	if (!num_str)
		return (0);
	num_str[neg + number] = '\0';
	while (number)
	{	
		if (neg)
			num_str[neg + number - 1] = -(n % 10) + '0';
		else if (!neg)
			num_str[neg + number - 1] = (n % 10) + '0';
		n /= 10;
		number--;
	}
	if (neg)
		num_str[0] = '-';
	return (num_str);
}
