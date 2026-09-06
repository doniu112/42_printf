/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dswietoc <dswietoc@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 12:09:10 by dswietoc          #+#    #+#             */
/*   Updated: 2026/08/01 11:39:24 by dswietoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char	*str;
	int		n;
	int		ret1;
	int		ret2;
	int		ret3;
	int		ret4;
	int		ret5;
	int		ret6;



	str = "NULL";
	n = -42;

	ret1 = printf(
			"STD: char=%c | str=%s | ptr=%p | dec=%d | int=%i | "
			"uint=%u | hex=%x | HEX=%X | percent=%%\n",
			'A', str, &n, 42, -36, 40032100, 255, 255);

	ret2 = ft_printf(
			"FT1: char=%c | str=%s | ptr=%p | dec=%d | int=%i | "
			"uint=%u | hex=%x | HEX=%X | percent=%%\n",
			'A', str, &n, 42, -36, 40032100, 255, 255);

	printf("printf return:    %d\n", ret1);
	printf("ft_printf return: %d\n", ret2);

	ret3 = printf((char *)NULL);
	ret4 = ft_printf((char *)NULL);

	printf("printf return:    %d\n", ret3);
	printf("ft_printf return: %d\n", ret4);

	ret5 = printf("\n");
	ret6 = ft_printf("\n");

	printf("printf return:    %d\n", ret5);
	printf("ft_printf return: %d\n", ret6);

	return (0);
}
// STD: char=A | str=Hello 42! | ptr=0x7fff41fa637c | dec=-42 | int=42 | uint=4294967295 | hex=ff | HEX=FF | percent=%
// STD: char=A | str=Hello 42! | ptr= | dec=42 | int=42 | uint= | hex=ff | HEX=FF | percent=%
// FT1: char=A | str=Hello 42! | ptr= | dec=42 | int=42 | uint= | hex=ff | HEX=FF | percent=%
