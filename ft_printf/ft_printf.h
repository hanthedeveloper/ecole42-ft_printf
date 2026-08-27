/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haincel <haincel@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 15:17:37 by haincel           #+#    #+#             */
/*   Updated: 2026/08/26 19:33:22 by haincel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *type, ...);
int		ft_putchar_fd(char c, int fd);
int		ft_putnbr_fd(int nb, int fd);
int		ft_putstr_fd(char *s, int fd);
int		ft_putptr_fd(unsigned long nb, int fd);
int		ft_puthex_fd(unsigned long nb, int fd, char *base);
int		ft_putnbr_unsigned_fd(unsigned int nb, int fd);

#endif
