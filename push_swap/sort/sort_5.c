/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:15:21 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 15:15:38 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_5(t_node **a, t_node **b, t_move *move)
{
	int	i;

	i = -1;
	while (++i < 2)
	{
		move_to_top_min(move, a);
		pb(a, b);
		reset_i(a);
	}
	sort_3(a);
	if (check_sort(b) == 0)
		sb(*b, 1);
	pa(a, b);
	pa(a, b);
	free_list(a);
}
