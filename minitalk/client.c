/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:34:16 by otalha            #+#    #+#             */
/*   Updated: 2022/07/23 13:57:34 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_char(char c, int pid)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if (c >> i & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		i--;
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	if (argc != 3)
	{
		ft_putstr_fd("\033[0;31mInvalid arguments :( \033[0m\n", 1);
		exit(EXIT_FAILURE);
	}
	i = 0;
	while (argv[1][i])
	{
		if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
		{
			ft_putstr_fd("\033[0;35mInvalid pid :( \033[0m\n", 1);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	i = 0;
	pid = ft_atoi(argv[1]);
	if (pid <= 0)
		exit(EXIT_FAILURE);
	while (argv[2][i])
		send_char(argv[2][i++], pid);
	exit (EXIT_SUCCESS);
}
