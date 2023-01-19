/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:56:27 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 14:56:29 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_unsigned_int(unsigned int n)
{
	int		len;

	len = 1;
	if (n > 9)
		len += ft_print_unsigned_int(n / 10);
	ft_print_char(n % 10 + '0');
	return (len);
}
