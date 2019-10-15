# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/08 13:21:17 by dlartigu          #+#    #+#              #
#    Updated: 2019/05/08 15:06:37 by dlartigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## NOM DE LIB ##
NAME = libft.a

## DECLARATIONS ##
FLAGS = -Wall -Wextra -Werror
LIBINC = libft.h

## PROTOTYPES C ##
SRCS = ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strlen.c \
	   ft_strdup.c \
	   ft_strcpy.c \
	   ft_strncpy.c \
	   ft_strcat.c \
	   ft_strncat.c \
	   ft_strlcat.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strstr.c \
	   ft_strcmp.c \
	   ft_strnstr.c \
	   ft_strncmp.c \
	   ft_atoi.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_putchar.c \
	   ft_putstr.c \
	   ft_strclr.c \
	   ft_strequ.c \
	   ft_strnequ.c \
	   ft_putendl.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr.c \
	   ft_putnbr_fd.c \
	   ft_memalloc.c \
	   ft_memdel.c \
	   ft_strnew.c \
	   ft_strdel.c \
	   ft_striter.c \
	   ft_striteri.c \
	   ft_strmap.c \
	   ft_strmapi.c \
	   ft_strsub.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_strsplit.c \
	   ft_itoa.c \
	   ft_strndup.c \
	   ft_is_word.c \
	   ft_wds_nb.c \
	   ft_wdl.c \
	   ft_strrev.c \
	   ft_abs.c \
	   ft_lstnew.c \
	   ft_lstdelone.c \
	   ft_lstdel.c \
	   ft_lstadd.c \
	   ft_lstiter.c \
	   ft_lstmap.c \

## CONVERSION OBJ ##
OBJ = $(SRCS:.c=.o)

## REGLES ##
all: $(NAME)

$(NAME): $(OBJ)
	ar surc $(NAME) $^

%.o : %.c
	gcc -c $(FLAGS) -I $(LIBINC) $^

fclean: clean
	rm -rf $(NAME)

clean:
	rm -f $(OBJ)

re: fclean all
