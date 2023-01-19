/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:14:50 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 15:14:51 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3(t_node **a)
{
	int	x;
	int	y;
	int	z;

	x = (*a)->data;
	y = (*a)->next->data;
	z = (*a)->next->next->data;
	if ((x > y) && (x < z) && (y < z))
		sa(*a, 1);
	else if ((x > y) && (y > z))
	{
		sa(*a, 1);
		rra(a, 1);
	}
	else if ((x > y) && (x > z) && (y < z))
		ra(a, 1);
	else if ((x < y) && (x < z) && (y > z))
	{
		sa(*a, 1);
		ra(a, 1);
	}
	else if ((x < y) && (x > z) && (y > z))
		rra(a, 1);
	free_list(a);
}
