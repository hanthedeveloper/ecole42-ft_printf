/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haincel <haincel@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 18:12:04 by haincel           #+#    #+#             */
/*   Updated: 2026/08/26 19:27:53 by haincel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_printf(const char *type, ...)
{
	int		index;
	int		len;
	va_list	args;
	t_flags	flags;

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
