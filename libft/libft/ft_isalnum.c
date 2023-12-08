/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmeyil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:33:31 by mehmeyil          #+#    #+#             */
/*   Updated: 2023/09/16 16:39:58 by mehmeyil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if ((i <= 'z' && i >= 'a') || (i <= 'Z' && i >= 'A')
		|| (i >= '0' && i <= '9'))
	{
		return (1);
	}
	else
		return (0);
}
/*
int	main(void)
{
	int x = '5';

	printf("%d\n", ft_isalnum(x));

	return (0);
}*/
