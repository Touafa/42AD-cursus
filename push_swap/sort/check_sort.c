/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:12:21 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 15:12:26 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_sort(t_node **head)
{
	t_node	*temp;

	temp = *head;
	while (temp->next != NULL)
	{
		if (temp->data >= temp->next->data)
			return (-1);
		temp = temp->next;
	}
	return (0);
}
