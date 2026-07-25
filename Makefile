# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dswietoc <dswietoc@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/18 17:20:39 by dswietoc          #+#    #+#              #
#    Updated: 2026/07/25 12:30:56 by dswietoc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRCS = ft_printf.c \
	ft_conversion.c \
	ft_putchar.c \
	ft_puthex.c \
	ft_putnbr.c \
	ft_putptr.c \
	ft_putstr.c \
	ft_strlen.c \
	ft_putunint.c
	

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re