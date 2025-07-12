/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakawamo <hakawamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:27:17 by hakawamo          #+#    #+#             */
/*   Updated: 2024/11/14 15:58:41 by hakawamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddress(uintptr_t num)
{
	char	*hex_digits;
	char	buffer[20];
	int		i;
	int		tmp;

	hex_digits = "0123456789abcdef";
	if (num == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	i = 0;
	while (num > 0)
	{
		buffer[i++] = hex_digits[num % 16];
		num = num / 16;
	}
	tmp = i + 2;
	write(1, "0x", 2);
	while (i-- > 0)
		write(1, &buffer[i], 1);
	return (tmp);
}

int	ft_puthex_small(unsigned int num)
{
	char	*hex_digits;
	char	buffer[20];
	int		i;
	int		tmp;

	hex_digits = "0123456789abcdef";
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	i = 0;
	while (num > 0)
	{
		buffer[i++] = hex_digits[num % 16];
		num = num / 16;
	}
	tmp = i;
	while (i-- > 0)
		write(1, &buffer[i], 1);
	return (tmp);
}

int	ft_puthex_large(unsigned int num)
{
	char	*hex_digits;
	char	buffer[20];
	int		i;
	int		tmp;

	hex_digits = "0123456789ABCDEF";
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	i = 0;
	while (num > 0)
	{
		buffer[i++] = hex_digits[num % 16];
		num = num / 16;
	}
	tmp = i;
	while (i-- > 0)
		write(1, &buffer[i], 1);
	return (tmp);
}
