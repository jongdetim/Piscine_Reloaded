# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tide-jon <tide-jon@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/03/20 18:20:31 by tide-jon       #+#    #+#                 #
#    Updated: 2019/03/21 12:40:11 by tide-jon      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
SOURCES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OUT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
INCLUDES = includes/
NAME = libft.a

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SOURCES) -I $(INCLUDES)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	rm -f $(OUT)

fclean: clean
	rm -f $(NAME)

re: fclean all
