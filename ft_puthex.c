/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dswietoc <dswietoc@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 19:30:42 by dswietoc          #+#    #+#             */
/*   Updated: 2026/07/21 19:30:42 by dswietoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int number, char var_type)
{
	char	*base;

	if (var_type == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";

	if (number >= 16)
		ft_puthex(number / 16, var_type);
	ft_putchar(base[number % 16]);
	return (0);
}
