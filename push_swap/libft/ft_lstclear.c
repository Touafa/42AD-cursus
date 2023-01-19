/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 14:54:43 by otalha            #+#    #+#             */
/*   Updated: 2023/01/14 14:54:49 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next_node;

	if (!del || !lst)
		return ;
	if (lst)
	{
		while (*lst != NULL)
		{
			next_node = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = next_node;
		}
	}
}
