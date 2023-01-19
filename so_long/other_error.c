/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otalha <otalha@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:16:01 by otalha            #+#    #+#             */
/*   Updated: 2022/09/24 14:47:19 by otalha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	parsing_error(t_game *game)
{
	free(game);
	ft_printf("Parsing_error\n");
	exit (1);
}

void	file_error(t_game *game)
{
	free(game);
	ft_printf("Wrong_file_extention\n");
	exit (1);
}

void	window_mlx_error(t_game *game)
{
	free_3(game);
	ft_printf("Window_mlx_error\n");
	exit (1);
}

void	number_parametres_error(void)
{
	ft_printf("Wrong_number_of_parametres\n");
	exit (1);
}
