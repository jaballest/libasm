# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jballest <jballest@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/27 15:59:38 by jballest          #+#    #+#              #
#    Updated: 2020/09/02 02:36:01 by jballest         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

NC = nasm
NFLAGS = -f elf64

CC = clang
CFLAGS = -Wall -Werror -Wextra #-no-pie

SRC =	ft_strlen.s		\
		ft_strcmp.s		\
		ft_strcpy.s		\
		ft_strdup.s		\
		ft_write.s		\
		ft_read.s		\

OBJ = $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(SRC)
	$(NC) $(NFLAGS) ft_strlen.s
	$(NC) $(NFLAGS) ft_write.s
	$(NC) $(NFLAGS) ft_read.s
	$(NC) $(NFLAGS) ft_strcmp.s
	$(NC) $(NFLAGS) ft_strcpy.s
	$(NC) $(NFLAGS) ft_strdup.s
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)
	$(CC) $(CFLAGS) main.c -L. -lasm -o test

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf test
	rm -rf $(NAME)

re: fclean all

test: fclean all
	./test