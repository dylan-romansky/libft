# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dromansk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/22 14:53:52 by dromansk          #+#    #+#              #
#    Updated: 2019/02/14 14:26:10 by dromansk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./src/*.c

I = -I ./includes

O = *.o

L = -L ./ -lft

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra $(I) $(SRCS) -c
	ar rcs $(NAME) $(O)
	ranlib $(NAME)

clean:
	rm -rf $(O)

fclean: clean
	rm -rf $(NAME)

re: fclean all

reclean: re
	make clean

compile:
	gcc main.c $(I) $(L) -o ftest

test: reclean
	make compile
	./ftest

run: clean
	make compile
	./ftest

rm: fclean
	rm ftest main.c
