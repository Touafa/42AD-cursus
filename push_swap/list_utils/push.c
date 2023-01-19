/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:04:09 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 15:04:17 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_node **head, int data, int index, int pos)
{
	t_node	*temp;

	temp = (t_node *)malloc(sizeof(t_node));
	temp->data = data;
	temp->index = index;
	temp->pos = pos;
	temp->next = (*head);
	*head = temp;
}
