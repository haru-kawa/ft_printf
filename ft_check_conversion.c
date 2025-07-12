/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakawamo <hakawamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:22:47 by hakawamo          #+#    #+#             */
/*   Updated: 2024/11/14 16:08:56 by hakawamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_conversion(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_putaddress((uintptr_t)va_arg(args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putint(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putuint(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_puthex_small(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (ft_puthex_large(va_arg(args, unsigned int)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}
