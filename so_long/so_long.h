/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:28:19 by otalha            #+#    #+#             */
/*   Updated: 2022/09/24 16:36:51 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include "./libft/libft.h"
# include "./mlx/mlx.h"

# define PLAYER1 "./img/p1.xpm"
# define PLAYER2 "./img/p2.xpm"
# define COIN "./img/col.xpm"
# define EXIT "./img/exit.xpm"
# define WALL "./img/wall.xpm"
# define FLOOR "./img/ground.xpm"

typedef struct s_game
{
	char	**map;
	int		p_x;
	int		p_y;
	int		p_xc;
	int		p_yc;
	int		col;
	int		player;
	int		steps;
	int		exit;
	void	*mlx;
	void	*mlx_w;
	void	*img;
	int		width_map;
	int		height_map;
	int		valid_map[256][256];
	int		is_col;
	int		is_exit;
}			t_game;

void	init_struct(t_game *game);
void	init_window(t_game *game);
int		parsing(char *file, t_game *game);
void	check_map(t_game *game);
void	check_file(char *file, t_game *game);
void	check_map_structure(t_game *game);
void	check_borders(t_game *game);
void	check_components(t_game *game);
void	count_components(t_game *game);
int		exit_game(t_game *game);
int		move(int key, t_game *game);
void	create_map(t_game *game);
void	send_to_print(t_game *game, int x, int y);
void	print_image(t_game *game, char *path, int x, int y);
int		check_move(int x, int y, t_game *game);
void	temp_check_1(char *temp, int fd, t_game *game);
void	temp_check_2(char *temp, int fd, char *str, t_game *game);
int		validcheck(t_game *game, int x, int y);
void	dfs(t_game *game, int x, int y);
void	check_valid_map(t_game *game);

//errors
void	file_error(t_game *game);
void	parsing_error(t_game *game);
void	structure_map_error(t_game *game);
void	border_map_error(t_game *game);
void	components_map_error(t_game *game);
void	empty_line_map_error(t_game *game, char *str, char *temp);
void	window_mlx_error(t_game *game);
void	number_parametres_error(void);
void	invalid_map_error(t_game *game);

//free
void	free_1(t_game *game, char *str, char *temp);
void	free_2(char *str, char *temp);
void	free_3(t_game *game);

#endif