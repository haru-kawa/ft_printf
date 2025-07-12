/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakawamo <hakawamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:24:58 by hakawamo          #+#    #+#             */
/*   Updated: 2024/11/14 17:01:17 by hakawamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_check_conversion(char c, va_list args);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putint(int num);
int	ft_putuint(unsigned int num);
int	ft_putaddress(uintptr_t num);
int	ft_puthex_small(unsigned int num);
int	ft_puthex_large(unsigned int num);

#endif