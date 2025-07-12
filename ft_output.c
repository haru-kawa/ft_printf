/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakawamo <hakawamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:06:08 by hakawamo          #+#    #+#             */
/*   Updated: 2024/11/14 17:01:06 by hakawamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i] != '\0')
		i++;
	write(1, str, i);
	return (i);
}

int	ft_putint(int num)
{
	char	c;
	int		count;

	count = 0;
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (num < 0)
	{
		count = count + write(1, "-", 1);
		num = num * (-1);
	}
	if (num >= 10)
	{
		count = count + ft_putint(num / 10);
		count = count + ft_putint(num % 10);
	}
	else
	{
		c = (char)(num + '0');
		count = count + write(1, &c, 1);
	}
	return (count);
}

int	ft_putuint(unsigned int num)
{
	char	c;
	int		count;

	count = 0;
	if (num >= 10)
	{
		count = count + ft_putuint(num / 10);
		count = count + ft_putuint(num % 10);
	}
	else
	{
		c = (char)(num + '0');
		count = count + write(1, &c, 1);
	}
	return (count);
}
