# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dromansk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/22 14:53:52 by dromansk          #+#    #+#              #
#    Updated: 2018/10/26 15:06:45 by dromansk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft_test

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -I ./includes ./srcs/*.c

clean:
	rm -rf a.out

fclean: clean

re: fclean all
