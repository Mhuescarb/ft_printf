# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/14 11:29:19 by mhuescar          #+#    #+#              #
#    Updated: 2025/02/10 17:32:06 by mhuescar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar
ARFLAGS = rcs

SRCS = ft_putchar.c ft_putstr.c ft_hexa_min.c ft_hexa_may.c ft_hexa_point.c\
 ft_strlen.c ft_putnbr.c ft_unsigned.c 

INCLUDE = ft_printf.h

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: all 
	cc -Wall -Werror -Wextra *.c libftprintf.a -o test
	./test 

.PHONY : all bonus clean fclean re