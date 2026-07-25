/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dswietoc <dswietoc@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 19:29:20 by dswietoc          #+#    #+#             */
/*   Updated: 2026/07/25 14:11:39 by dswietoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	strlen;

	if (!str)
		return (ft_putstr("(null)"));
	strlen = 0;
	while (*str)
	{
		strlen += ft_putchar(*str);
		str++;
	}
	return (strlen);
}
