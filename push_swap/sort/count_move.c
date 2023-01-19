/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:12:34 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 15:13:06 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	count_move(t_move *move, int size, int index)
{
	int	top;
	int	bottom;

	top = index - 1;
	bottom = size - index + 1;
	if (top < bottom)
	{
		move->step = top;
		move->route = 1;
	}
	else
	{
		move->step = bottom;
		move->route = 0;
	}
	return (move->step);
}
