/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_invalid_path.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:05:59 by otalha            #+#    #+#             */
/*   Updated: 2022/09/25 11:11:50 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	validcheck(t_game *game, int x, int y)
{
	if (game->valid_map[y][x] == 1)
		return (1);
	if (game->map[y][x] == '1')
		return (1);
	return (0);
}

void	dfs(t_game *game, int x, int y)
{
	game->valid_map[y][x] = 1;
	if (game->map[y][x] == 'E')
		game->is_exit++;
	if (game->map[y][x] == 'C')
		game->is_col++;
	if (validcheck(game, x, y - 1) == 0)
		dfs(game, x, y - 1);
	if (validcheck(game, x + 1, y) == 0)
		dfs(game, x + 1, y);
	if (validcheck(game, x, y + 1) == 0)
		dfs(game, x, y + 1);
	if (validcheck(game, x - 1, y) == 0)
		dfs(game, x - 1, y);
}
