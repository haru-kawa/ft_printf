/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakawamo <hakawamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:24:53 by hakawamo          #+#    #+#             */
/*   Updated: 2024/11/12 20:41:01 by hakawamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	va_start(args, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c' || *format == 's' || *format == 'p'
				|| *format == 'd' || *format == 'i' || *format == 'u'
				|| *format == 'x' || *format == 'X' || *format == '%')
				count = count + ft_check_conversion(*format, args);
		}
		else
			count = count + ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
