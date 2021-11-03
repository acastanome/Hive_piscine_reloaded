#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acastano <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 12:50:37 by acastano          #+#    #+#              #
#    Updated: 2021/11/03 16:59:08 by acastano         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

HEADERS = includes/

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS) -I$(HEADERS)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ) *.c~ *.h~

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY = all clean fclean re
