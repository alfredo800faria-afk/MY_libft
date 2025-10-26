# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/25 14:19:42 by srusso-b          #+#    #+#              #
#    Updated: 2025/10/25 15:48:02 by srusso-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= libft.a
#SOURCES 			=	ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
#						ft_isdigit.c ft_isprint.c ft_memset.c ft_strchr.c \
#						ft_strrchr.c ft_strdup.c ft_strlen.c ft_tolower.c \
#						ft_toupper.c ft_bzero.c ft_calloc.c ft_memcpy.c \
#						ft_memchr.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
#						ft_strncmp.c ft_memcmp.c ft_strnstr.c ft_substr.c \
#						ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c \
#						ft_putendl_fd.c ft_putnbr_fd.c ft_strtrim.c \
#						ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c
SOURCES				= $(wildcard *.c)

#SOURCES_BONUS		=

OBJECTS 			= $(SOURCES:.c=.o)

#OBJECTS_BONUS 		= $(OBJECTS_BONUS:.c=.o)

CC 					= gcc

CFLAGS 				= -Wall -Wextra -Werror

HEADER				= libft.h



all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
