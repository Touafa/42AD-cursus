/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:07:17 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 15:07:33 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_node **a, int flag)
{
	t_node	*pre_last;
	t_node	*last;
	t_node	*tmp;
	int		size;

	tmp = *a;
	size = ft_lstsize_ps(&tmp);
	if (size < 2)
		return ;
	last = ft_lstlast_ps(*a);
	pre_last = ft_lstprelast_ps(*a);
	pre_last->next = NULL;
	last->next = *a;
	(*a) = last;
	if (flag == 1)
		ft_printf("rra\n");
}

void	rrb(t_node **b, int flag)
{
	t_node	*pre_last;
	t_node	*last;
	t_node	*tmp;
	int		size;

	tmp = *b;
	size = ft_lstsize_ps(&tmp);
	if (size < 2)
		return ;
	last = ft_lstlast_ps(*b);
	pre_last = ft_lstprelast_ps(*b);
	pre_last->next = NULL;
	last->next = *b;
	(*b) = last;
	if (flag == 1)
		ft_printf("rrb\n");
}

void	rrr(t_node **a, t_node **b, int flag)
{
	rra(a, flag);
	rrb(b, flag);
	ft_printf("rrr\n");
}
