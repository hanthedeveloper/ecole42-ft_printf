/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haincel <haincel@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 18:20:36 by haincel           #+#    #+#             */
/*   Updated: 2026/08/26 18:20:37 by haincel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check(char t, va_list args)
{
	if (t == 'c')
		return (ft_putchar_fd((char)va_arg(args, int), 1));
	if (t == 'd' || t == 'i')
		return (ft_putnbr_fd(va_arg(args, int), 1));
	if (t == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1));
	if (t == 'u')
		return (ft_putnbr_unsigned_fd(va_arg(args, unsigned int), 1));
	if (t == 'x')
		return (ft_puthex_fd(va_arg(args, unsigned int), 1, "0123456789abcdef"));
	if (t == 'X')
		return (ft_puthex_fd(va_arg(args, unsigned int), 1, "0123456789ABCDEF"));
	if (t == 'p')
		return (ft_putptr_fd((unsigned long)va_arg(args, void *), 1));
	if (t == '%')
		return (ft_putchar_fd('%', 1));
	return (0);
}

int	ft_printf(const char *type, ...)
{
	int		index;
	int		len;
	va_list	args;

	if (!type)
		return (-1);
	va_start(args, type);
	index = 0;
	len = 0;
	while (type[index])
	{
		if (type[index] == '%')
		{
			index++;
			len = len + check(type[index], args);
		}
		else
		{
			write(1, &type[index], 1);
			len++;
		}
		index++;
	}
	va_end(args);
	return (len);
}
