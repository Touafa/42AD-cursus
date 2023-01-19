/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:08:39 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 15:21:52 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi_ps(char *str, char **final_argv, int *arr, int index)
{
	long	result;
	int		flag;

	result = 0;
	flag = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			flag = -1;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str++ - '0';
		if (result > INT_MAX && flag == 1)
			free_error_complex(arr, final_argv, index);
		if (((result - 1) > INT_MAX) && flag == -1)
			free_error_complex(arr, final_argv, index);
	}
	if (ft_isdigit(*str) == 0 && *str)
		free_error_complex(arr, final_argv, index);
	result *= flag;
	return (result);
}
