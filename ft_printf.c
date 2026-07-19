/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dswietoc <dswietoc@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/18 17:28:46 by dswietoc          #+#    #+#             */
/*   Updated: 2026/07/19 11:22:56 by dswietoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			ft_conversion(*format, *(format + 1), va_arg(args, ft_check_type(*(format + 1))));
			format++;
		}
		else
			ft_putchar(*format);
		format++;
	}
	va_end(args);	
	return (0);
}
