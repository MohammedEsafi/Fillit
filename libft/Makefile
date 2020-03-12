# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkhabour <kkhabour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/29 23:34:49 by mesafi            #+#    #+#              #
#    Updated: 2019/07/04 22:04:01 by kkhabour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = exit_program.c ft_atoi.c ft_bzero.c ft_del.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_lstadd.c ft_lstadd_i.c \
ft_lstcount.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_lstpop.c \
ft_lstpush.c ft_lstrm.c ft_lstrm_i.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c \
ft_putlst.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_strcat.c ft_strchr.c \
ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c \
ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c \
ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c \
ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -c $(SRC)
	@ar rc $(NAME) $(OBJS)
clean:
	@rm -rf $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: fclean all
