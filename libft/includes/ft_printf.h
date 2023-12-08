/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehmeyil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:28:29 by mehmeyil          #+#    #+#             */
/*   Updated: 2023/09/23 15:54:31 by mehmeyil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *tip, ...);
int	print_hex(unsigned int numara, char x);
int	print_numara(int s);
int	print_pointer(void *p);
int	print_string(char const *str);
int	print_unsigned(unsigned int	s);

#endif
