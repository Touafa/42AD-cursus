/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_limit_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:03:09 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 15:03:10 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_max_node(t_node **head)
{
	int		max_node;
	t_node	*current;

	max_node = (*head)->data;
	current = *head;
	while (current != NULL)
	{
		if (max_node < current->data)
			max_node = current->data;
		current = current->next;
	}	
	return (max_node);
}

int	find_min_node(t_node **head)
{
	int		min_node;
	t_node	*current;

	min_node = (*head)->data;
	current = *head;
	while (current != NULL)
	{
		if (min_node > current->data)
			min_node = current->data;
		current = current->next;
	}	
	return (min_node);
}
