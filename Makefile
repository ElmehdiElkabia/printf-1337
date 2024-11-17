# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eelkabia <eelkabia@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/14 11:17:02 by eelkabia          #+#    #+#              #
#    Updated: 2024/11/17 12:34:36 by eelkabia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
FUNCTION = ft_printf.c ft_putchar.c ft_puthex_upper.c ft_puthex.c ft_putnbr.c ft_putptr.c ft_putstr.c ft_putunbr.c

OBG = $(FUNCTION:.c=.o)

all : $(NAME)

$(NAME) : $(OBG)
	ar rcs $(NAME) $(?)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBG)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
