/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:51:40 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 14:51:42 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_argv(char **argv)
{
	int	i;

	i = 1;
	while (argv[i] != NULL)
	{
		free(argv[i]);
		i++;
	}
}

void	free_final_argv(char **final_argv)
{
	int	i;

	i = 0;
	while (final_argv[i] != NULL)
	{
		free(final_argv[i]);
		i++;
	}
	free(final_argv);
}

void	free_final_argv_2(char **final_argv, int index)
{
	int	size;

	size = get_final_size(final_argv);
	while (index < size)
	{
		free(final_argv[index]);
		index++;
	}
	free(final_argv);
}

void	free_complex(int *arr, char **final_argv)
{
	free(arr);
	free(final_argv);
}

void	free_complex_2(int *arr, char **final_argv, int index)
{
	free(arr);
	free_final_argv_2(final_argv, index);
}
