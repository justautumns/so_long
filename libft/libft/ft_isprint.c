/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmeyil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:45:33 by mehmeyil          #+#    #+#             */
/*   Updated: 2023/09/16 16:41:14 by mehmeyil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
	{
		return (1);
	}
	else
		return (0);
}
/*
int	main(void)
{
	int k = '/';

	printf("%d\n", ft_isprint(k));
	return (0);
}*/
