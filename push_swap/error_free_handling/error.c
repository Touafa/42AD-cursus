/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:51:20 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 14:51:29 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	error(void)
{
	ft_printf("Error\n");
	exit(1);
}

void	error_2(char *str, char **final_argv)
{
	free(str);
	free(final_argv);
	ft_printf("Error\n");
	exit(1);
}

void	free_error_complex(int *arr, char **final_argv, int index)
{
	free_complex_2(arr, final_argv, index);
	error();
}
