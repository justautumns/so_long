/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmeyil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:34:19 by mehmeyil          #+#    #+#             */
/*   Updated: 2023/09/23 15:40:22 by mehmeyil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char const *str)
{
	if (str == NULL)
		return(write(1, "(null)", 6));
	else
		return (write(1, str, ft_strlen(str)));
}
