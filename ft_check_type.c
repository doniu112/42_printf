/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dswietoc <dswietoc@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 11:00:10 by dswietoc          #+#    #+#             */
/*   Updated: 2026/07/19 11:22:56 by dswietoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_check_type(char c)
{
	if (c == 'c')
		return("char");
	else if (c == 's')
		return("char *");
	else if (c == 'p')
		return("void *");
	else if (c == 's')
		return("char *");
	else if (c == 's')
		return("char *");
}