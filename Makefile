# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhuescar <mhuescar@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/14 11:29:19 by mhuescar          #+#    #+#              #
#    Updated: 2025/01/14 17:19:57 by mhuescar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprint.a

CC = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar
ARFLAGS = rcs

SRCS = 











OBJS = $(SRCS:.c=.o)
BOBJS = $(BSRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

bonus: $(OBJS) $(BOBJS)
	$(AR) -r $(NAME) $?

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all bonus clean fclean re