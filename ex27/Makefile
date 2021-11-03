#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acastano <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 20:53:09 by acastano          #+#    #+#              #
#    Updated: 2021/11/03 21:00:15 by acastano         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc

CFLAGS = -Wall -Werror -Wextra

NAME = ft_display_file

SRCS = ft_display_file.c

OBJ = ft_display_file.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ) *.c~ *.h~

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY = all clean fclean re
