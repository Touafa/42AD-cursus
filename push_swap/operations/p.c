/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:06:08 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 15:06:46 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_node **a, t_node **b)
{
	int		size;
	t_node	*tmp;
	t_node	*temp;

	tmp = *b;
	temp = *b;
	size = ft_lstsize_ps(&tmp);
	if (size == 0)
		return ;
	push(a, temp->data, 0, temp->pos);
	del_node(b);
	ft_printf("pa\n");
}

void	pb(t_node **a, t_node **b)
{
	int		size;
	t_node	*tmp;
	t_node	*temp;

	tmp = *a;
	temp = *a;
	size = ft_lstsize_ps(&tmp);
	if (size == 0)
		return ;
	push(b, temp->data, 0, temp->pos);
	del_node(a);
	ft_printf("pb\n");
}

void	pb_sm(t_node **a, t_node **b)
{
	int		size;
	t_node	*tmp;
	t_node	*temp;

	tmp = *a;
	temp = *a;
	size = ft_lstsize_ps(&tmp);
	if (size == 0)
		return ;
	push(b, temp->data, 0, temp->pos);
	ft_printf("pb\n");
}
