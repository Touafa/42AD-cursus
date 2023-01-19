/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:03:55 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 15:03:56 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize_ps(t_node **head)
{
	int		size;
	t_node	*current;

	size = 0;
	current = *head;
	while (current)
	{
		current = current->next;
		size++;
	}
	return (size);
}
