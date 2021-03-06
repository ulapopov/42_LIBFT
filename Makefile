# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: upopov <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 13:21:13 by upopov            #+#    #+#              #
#    Updated: 2020/02/23 22:57:43 by upopov           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

FILES = *.c
OBJECTS = *.o
HEADERS = *.h

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) -I$(HEADERS) -c $(FILES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f  $(NAME)

re: fclean all

.PHONY: all clean fclean re
	
