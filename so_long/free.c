/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:06:26 by otalha            #+#    #+#             */
/*   Updated: 2022/09/25 11:32:08 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_1(t_game *game, char *str, char *temp)
{
	free(game);
	free(str);
	free(temp);
}

void	free_2(char *str, char *temp)
{
	free(str);
	free(temp);
}

void	free_3(t_game *game)
{
	int	i;

	i = 0;
	while (game->map[i])
	{
		free(game->map[i]);
		i++;
	}
	free(game->map);
	free(game);
}
