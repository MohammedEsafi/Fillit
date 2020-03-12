# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkhabour <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 21:17:06 by kkhabour          #+#    #+#              #
#    Updated: 2019/07/04 22:09:45 by kkhabour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
CC = gcc
CFLAGS = -Werror -Wall -Wextra
LIBFT = libft/libft.a
SRC = main.c read_tetriminos.c tetrimino.c board.c solve.c

all: $(NAME)
$(NAME):
	@make -C libft
	@$(CC) $(CFLAGS) $(SRC) $(LIBFT) -o $(NAME)
clean:
	@make clean -C libft
fclean: clean
	@make fclean -C libft
	@rm -f $(NAME)
re: fclean all
norme:
	norminette $(SRC)
	norminette *.h
