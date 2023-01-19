/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:03:00 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 15:03:01 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	del_node(t_node **head)
{
	t_node	*temp;

	temp = *head;
	*head = (*head)->next;
	free(temp);
}