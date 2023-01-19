/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:02:03 by otalha            #+#    #+#             */
/*   Updated: 2022/06/22 12:21:35 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 1)
		return ;
	write(fd, &c, 1);
}

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}
