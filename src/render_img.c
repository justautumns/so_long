/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_img.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmeyil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:38:14 by mehmeyil          #+#    #+#             */
/*   Updated: 2023/12/08 14:38:16 by mehmeyil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../so_long.h"

int	render_img(t_game *game)
{
	int	y;
	int	x;

	y = 0;
	while (y < game->line)
	{
		x = 0;
		while (x < game->col)
		{
			put_map(x, y, game->map[y][x], game);
			x++;
		}
		y++;
	}
	return (0);
}
