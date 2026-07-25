/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dswietoc <dswietoc@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 19:33:31 by dswietoc          #+#    #+#             */
/*   Updated: 2026/07/25 14:17:28 by dswietoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long	addr;
	int		strlen;

	strlen = 0;
	addr = (unsigned long)ptr;
	if (!ptr)
		return (ft_putstr("(nil)"));
	strlen += ft_putstr("0x");
	strlen += ft_puthex(addr, 'x');
	return (strlen);
}
