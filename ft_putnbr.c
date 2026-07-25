/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dswietoc <dswietoc@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 19:33:18 by dswietoc          #+#    #+#             */
/*   Updated: 2026/07/25 13:37:16 by dswietoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num)
{
	long	nb;
	int	strlen;

	nb = num;
	strlen = 0;
	if (nb < 0)
	{
		strlen += ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
		strlen += ft_putchar(nb + '0');
	else
	{
		strlen += ft_putnbr(nb / 10);
		strlen += ft_putchar(nb % 10 + '0');
	}
	return (strlen);
}
