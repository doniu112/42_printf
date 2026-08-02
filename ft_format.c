/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dswietoc <dswietoc@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 19:31:34 by dswietoc          #+#    #+#             */
/*   Updated: 2026/08/02 09:38:09 by dswietoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char var_type, va_list *args)
{
	if (var_type == 'c')
		return (ft_putchar(va_arg(*args, int)));
	if (var_type == 's')
		return (ft_putstr(va_arg(*args, char *)));
	if (var_type == 'p')
		return (ft_putptr(va_arg(*args, void *)));
	if (var_type == 'd' || var_type == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	if (var_type == 'u')
		return (ft_putunint(va_arg(*args, unsigned int)));
	if (var_type == 'x' || var_type == 'X')
		return (ft_puthex(va_arg(*args, unsigned int), var_type));
	if (var_type == '%')
		return (ft_putchar('%'));
	return (0);
}
