/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dswietoc <dswietoc@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 12:13:43 by dswietoc          #+#    #+#             */
/*   Updated: 2026/07/25 13:36:20 by dswietoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunint(unsigned int number)
{
	int	strlen;

	strlen = 0;
	if (number >= 10)
		strlen += ft_putunint(number / 10);
	strlen += ft_putchar((number % 10) + '0');
	return (strlen);
}