/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:39:57 by otalha            #+#    #+#             */
/*   Updated: 2022/07/23 13:57:50 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	receive_msg(int signum)
{
	static int	power;
	static int	byte;

	if (signum == SIGUSR1)
		byte += 1 << (7 - power);
	power++;
	if (power == 8)
	{
		ft_putchar_fd(byte, 1);
		if (byte == '\0')
			exit (EXIT_SUCCESS);
		power = 0;
		byte = 0;
	}
}

int	main(void)
{
	pid_t	pid;

	pid = getpid();
	ft_putstr_fd("Server PID is: ", 1);
	ft_putnbr_fd(pid, 1);
	ft_putstr_fd("\n", 1);
	signal(SIGUSR1, receive_msg);
	signal(SIGUSR2, receive_msg);
	while (1)
		pause();
}
