/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_validations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmeyil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 14:38:21 by mehmeyil          #+#    #+#             */
/*   Updated: 2023/12/08 14:38:22 by mehmeyil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../so_long.h"

void	start_validations(t_game *game, int fd)
{
	ft_printf("Init validations...\n");
	check_map(game);
	valid_map(game);
	valid_path(game, fd);
}
