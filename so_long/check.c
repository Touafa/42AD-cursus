/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:02:00 by otalha            #+#    #+#             */
/*   Updated: 2022/09/24 15:20:50 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	temp_check_1(char *temp, int fd, t_game *game)
{
	if (!temp || temp[0] != '1')
	{
		free(game);
		close(fd);
		ft_printf("First_element_should_be_WALL or Map_empty_first_line\n");
		exit (1);
	}
}

void	temp_check_2(char *temp, int fd, char *str, t_game *game)
{
	if (temp != NULL && temp[0] != '1')
	{
		free_1(game, str, temp);
		close(fd);
		ft_printf("First_element_should_be_WALL or Map_empty_line\n");
		exit (1);
	}
}

void	check_map(t_game *game)
{
	check_map_structure(game);
	check_borders(game);
	check_components(game);
	count_components(game);
}

void	check_valid_map(t_game *game)
{
	dfs(game, game->p_xc, game->p_yc);
	if ((game->is_col != game->col) || (game->is_exit < 1))
		invalid_map_error(game);
}

void	check_file(char *file, t_game *game)
{
	int	i;

	i = ft_strlen(file) - 4;
	if (file[i] == '.' && file[i + 1] == 'b'
		&& file[i + 2] == 'e' && file[i + 3] == 'r')
	{
		if (parsing(file, game) == -1)
			parsing_error(game);
		check_map(game);
	}
	else
		file_error(game);
}
