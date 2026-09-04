/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfnumber.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haincel <haincel@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 16:21:24 by haincel           #+#    #+#             */
/*   Updated: 2026/08/26 19:33:51 by haincel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int nb, int fd)
{
	int	len;

	len = 0;
	if (nb == INT_MIN)
	{
		write(fd, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		len += ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
		len += ft_putnbr_fd(nb / 10, fd);
	len += ft_putchar_fd((nb % 10) + '0', fd);
	return (len);
}

int	ft_putnbr_unsigned_fd(unsigned int nb, int fd)
{
	int	len;

	len = 0;
	if (nb >= 10)
		len += ft_putnbr_unsigned_fd(nb / 10, fd);
	len += ft_putchar_fd((nb % 10) + '0', fd);
	return (len);
}
