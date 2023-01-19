/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:55:01 by otalha            #+#    #+#             */
/*   Updated: 2022/09/17 18:55:03 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_int(int n)
{
	int		len;

	len = 1;
	if (n == -2147483648)
		return (ft_print_string("-2147483648"));
	if (n < 0)
	{
		ft_print_char('-');
		len++;
		n = -n;
	}
	if (n > 9)
		len += ft_print_int(n / 10);
	ft_print_char(n % 10 + '0');
	return (len);
}
