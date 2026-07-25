/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dswietoc <dswietoc@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 19:31:13 by dswietoc          #+#    #+#             */
/*   Updated: 2026/07/25 13:13:04 by dswietoc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
#include <stdint.h>


int	ft_printf(const char *format, ...);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_putnbr(int num);
int	ft_puthex(uintptr_t number, char var_type);
int	ft_strlen(char *str);
int	ft_putptr(void *ptr);
int	ft_conversion(char var_type, va_list *args);
int	ft_putunint(unsigned int number);

#endif
