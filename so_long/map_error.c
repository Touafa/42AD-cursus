/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:10:20 by otalha            #+#    #+#             */
/*   Updated: 2022/09/25 11:33:45 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	structure_map_error(t_game *game)
{
	free_3(game);
	ft_printf("Map_is_not_rectangular\n");
	exit(1);
}

void	border_map_error(t_game *game)
{
	free_3(game);
	ft_printf("Map_is_not_closed\n");
	exit(1);
}

void	components_map_error(t_game *game)
{
	free_3(game);
	ft_printf("Wrong_component or Wrong_number_of_components\n");
	exit(1);
}

void	empty_line_map_error(t_game *game, char *str, char *temp)
{
	free_1(game, str, temp);
	ft_printf("Map_has_empty_line_in_the_end\n");
	exit (1);
}

void	invalid_map_error(t_game *game)
{
	free_3(game);
	ft_printf("Invalid_path_error\n");
	exit(1);
}
