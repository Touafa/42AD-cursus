/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:15:54 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 15:16:40 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_back(t_node **a, t_node **b)
{
	int		size_b;
	t_move	move;

	size_b = ft_lstsize_ps(b);
	while (size_b > 0)
	{
		move_to_top_max(&move, b);
		pa(a, b);
		size_b--;
	}
	free_list(a);
}

void	sort_more(t_node **a, t_node **b, t_move *move, int *arr)
{
	t_node	*start_a;

	start_a = *a;
	while (arr[1] > 0)
	{
		if (start_a->pos <= arr[0])
		{
			move_to_top_cur(move, a, start_a->pos);
			pb_sm(a, b);
			if (start_a->pos < (arr[0] - (arr[2] / 2)))
				rb(b, 1);
			start_a = start_a->next;
			del_node(a);
			arr[1]--;
		}
		else
			start_a = start_a->next;
		if (start_a == NULL)
		{
			start_a = *a;
			arr[0] += arr[2];
		}
	}
	push_back(a, b);
}
