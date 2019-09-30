# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhulk <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/07 14:39:26 by rhulk             #+#    #+#              #
#    Updated: 2019/04/07 14:39:46 by rhulk            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

O = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

H = includes

all: $(NAME)

$(NAME):
	gcc -I$(H) -c $(SRC)
	ar rc $(NAME) $(O)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
