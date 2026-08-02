/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dswietoc <dswietoc@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 19:31:23 by dswietoc          #+#    #+#             */
/*   Updated: 2026/08/02 09:38:09 by dswietoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		strlen;

	if (!str)
		return (-1);
	strlen = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			strlen += ft_format(*(str + 1), &args);
			str += 2;
		}
		else
		{
			strlen += ft_putchar(*str);
			str++;
		}
	}
	va_end(args);
	return (strlen);
}
