/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:55:47 by otalha            #+#    #+#             */
/*   Updated: 2022/09/17 18:55:49 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_function(va_list args, const char c)
{
	int	size;

	size = 0;
	if (c == 'c')
		size += ft_print_char(va_arg(args, int));
	else if (c == 's')
		size += ft_print_string(va_arg(args, char *));
	else if (c == 'p')
		size += ft_print_point(va_arg(args, unsigned long long));
	else if (c == 'i' || c == 'd')
		size += ft_print_int(va_arg(args, int));
	else if (c == 'u')
		size += ft_print_unsigned_int(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		size += ft_print_hex(va_arg(args, unsigned int), c);
	else if (c == '%')
		size += ft_print_char('%');
	else
		size += ft_print_char(c);
	return (size);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		size;
	size_t	i;

	i = 0;
	size = 0;
	va_start(args, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			size += find_function(args, fmt[i + 1]);
			i += 2;
		}
		else
		{
			size += ft_print_char(fmt[i]);
			i++;
		}
	}
	va_end(args);
	return (size);
}
