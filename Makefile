# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kturnips <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/11 16:39:00 by kturnips          #+#    #+#              #
#    Updated: 2019/02/11 19:12:08 by kturnips         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/Part1/*.c srcs/Part2/*.c

INCLUDES = includes/

O = *.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(INCLUDES) -c $(SRC)
	ar rc $(NAME) $(O)

clean:
	/bin/rm -f $(O)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
