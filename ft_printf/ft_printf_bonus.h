/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haincel <haincel@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 19:15:45 by haincel           #+#    #+#             */
/*   Updated: 2026/08/26 19:24:07 by haincel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINT_BONUS_H

#include <stdarg.h>
#include <unistd.h>

typedef struct s_flags
{
	int	is_hash;
	int	is_space;
	int	is_plus;
	int	width;
	int	zero;
	int	hyphen;
}	t_flags;

#endif