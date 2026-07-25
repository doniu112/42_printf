/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dswietoc <dswietoc@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 19:30:42 by dswietoc          #+#    #+#             */
/*   Updated: 2026/07/25 14:00:14 by dswietoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long number, char var_type)
{
	char	*base;
	int	count;

	count = 0;
	if (var_type == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";

	if (number >= 16)
		count += ft_puthex(number / 16, var_type);
	count += ft_putchar(base[number % 16]);
	return (count);
}
