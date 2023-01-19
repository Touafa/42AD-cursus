/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:06:54 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 15:07:09 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_node **a, int flag)
{
	t_node	*first;
	t_node	*last;
	t_node	*tmp;
	int		size;

	tmp = *a;
	size = ft_lstsize_ps(&tmp);
	if (size < 2)
		return ;
	last = ft_lstlast_ps(*a);
	first = *a;
	last->next = first;
	(*a) = first->next;
	first->next = NULL;
	if (flag == 1)
		ft_printf("ra\n");
}

void	rb(t_node **b, int flag)
{
	t_node	*first;
	t_node	*last;
	t_node	*tmp;
	int		size;

	tmp = *b;
	size = ft_lstsize_ps(&tmp);
	if (size < 2)
		return ;
	last = ft_lstlast_ps(*b);
	first = *b;
	last->next = first;
	(*b) = first->next;
	first->next = NULL;
	if (flag == 1)
		ft_printf("rb\n");
}

void	rr(t_node **a, t_node **b, int flag)
{
	ra(a, flag);
	rb(b, flag);
	ft_printf("rr\n");
}
