/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:25:35 by otalha            #+#    #+#             */
/*   Updated: 2022/09/25 11:14:00 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_struct(t_game *game)
{
	game->map = NULL;
	ft_memset(game->valid_map, 0, sizeof(int) * 256 * 256);
	game->player = 0;
	game->p_x = 0;
	game->p_y = 0;
	game->p_xc = 0;
	game->p_yc = 0;
	game->col = 0;
	game->steps = 0;
	game->exit = 0;
	game->width_map = 0;
	game->height_map = 0;
	game->is_col = 0;
	game->is_exit = 0;
}

void	init_window(t_game *game)
{
	game->mlx = mlx_init();
	if (!game->mlx)
		window_mlx_error(game);
	game->mlx_w = mlx_new_window(game->mlx, game->width_map * 64,
			game->height_map * 64, "so_long");
	if (!game->mlx_w)
		window_mlx_error(game);
}

int	main(int argc, char **argv)
{
	t_game	*game;

	if (argc == 2)
	{
		game = malloc(sizeof(t_game));
		if (!game)
			return (0);
		init_struct(game);
		check_file(argv[1], game);
		check_valid_map(game);
		init_window(game);
		create_map(game);
		mlx_hook(game->mlx_w, 2, 1L << 0, move, game);
		mlx_hook(game->mlx_w, 17, (1L << 17), exit_game, game);
		mlx_loop(game->mlx);
	}
	else
		number_parametres_error();
	return (0);
}
