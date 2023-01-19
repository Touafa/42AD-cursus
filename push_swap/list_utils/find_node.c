/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:03:31 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 15:03:37 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*find_node(t_node **head, int data)
{
	t_node	*temp;

	temp = *head;
	while (temp != NULL)
	{
		if (temp->data == data)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}

void	set_pos(t_node **head, int *arr, int size)
{
	t_node	*temp;
	int		i;

	i = 0;
	while (i < size)
	{
		temp = find_node(head, arr[i]);
		temp->pos = i + 1;
		i++;
	}
}
