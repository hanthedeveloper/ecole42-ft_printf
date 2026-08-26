/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfstring.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haincel <haincel@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 16:21:26 by haincel           #+#    #+#             */
/*   Updated: 2026/08/26 16:30:58 by haincel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}

int	ft_putstr_fd(char *s, int fd)
{
	int	len;

	if (!s)
		return (0);
	len = 0;
	while (s[len])
	{
		ft_putchar_fd(s[len], fd);
		len++;
	}
	return (len);
}