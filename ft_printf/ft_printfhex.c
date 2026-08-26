/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haincel <haincel@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 16:21:28 by haincel           #+#    #+#             */
/*   Updated: 2026/08/26 16:30:57 by haincel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_fd(unsigned int nb, int fd, char *base)
{
	int	len;

	len = 0;
	if (nb >= 16)
		len += ft_puthex_fd(nb / 16, fd, base);
	len += ft_putchar_fd(base[nb % 16], fd);
	return (len);
}

int	ft_putptr_fd(unsigned long nb, int fd)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (ft_putstr_fd("0x0", fd));
	len += ft_putstr_fd("0x", fd);
	len += ft_puthex_fd((unsigned int)nb, fd, "0123456789abcdef");
	return (len);
}