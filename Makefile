# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dswietoc <dswietoc@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/18 17:20:39 by dswietoc          #+#    #+#              #
#    Updated: 2026/07/18 17:30:24 by dswietoc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRCS = ft_printf.c \
	

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):$(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o @

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re