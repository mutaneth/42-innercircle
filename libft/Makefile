# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hfalmer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/19 00:12:27 by hfalmer           #+#    #+#              #
#    Updated: 2018/12/26 22:34:15 by hfalmer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLG = -Wall -Wextra -Werror
SRC = 	ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strlen.c\
		ft_strdup.c\
		ft_strcpy.c\
		ft_strncpy.c\
		ft_strcat.c\
		ft_strstr.c\
		ft_strcmp.c\
		ft_atoi.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_memmove.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strnstr.c\
		ft_strlcat.c\
		ft_strncat.c\
		ft_memalloc.c\
		ft_memdel.c\
		ft_strnew.c\
		ft_strdel.c\
		ft_strclr.c\
		ft_striter.c\
		ft_strmap.c\
		ft_strequ.c\
		ft_strsub.c\
		ft_strjoin.c\
		ft_strtrim.c
INC = -I ./
OUT = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		gcc $(FLG) $(INC) -c $(SRC)
		ar rc $(NAME) $(OUT)
		ranlib $(NAME)

clean:
		rm -rf $(OUT)

fclean:	clean
		rm -rf $(NAME)

re: fclean all
