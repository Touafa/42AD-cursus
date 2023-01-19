/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:04:03 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 15:04:04 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_list(t_node **a)
{
	t_node	*temp;

	if (!a)
		return ;
	temp = *a;
	while (temp != NULL)
	{
		ft_printf("d %d  i %d  p %d\n", temp->data, temp->index, temp->pos);
		temp = temp->next;
	}
}
