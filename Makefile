# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/25 14:19:42 by srusso-b          #+#    #+#              #
#    Updated: 2025/11/01 16:01:58 by srusso-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= 	libft.a

SOURCES 			=	ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
						ft_isdigit.c ft_isprint.c ft_memset.c ft_strchr.c \
						ft_strrchr.c ft_strdup.c ft_strlen.c ft_tolower.c \
						ft_toupper.c ft_bzero.c ft_calloc.c ft_memcpy.c \
						ft_memchr.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
						ft_strncmp.c ft_memcmp.c ft_strnstr.c ft_substr.c \
						ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c \
						ft_putendl_fd.c ft_putnbr_fd.c ft_strtrim.c \
						ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c

SOURCES_BONUS		= 	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
						ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
              			ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJECTS 			= 	$(SOURCES:.c=.o)

OBJECTS_BONUS 		= 	$(SOURCES_BONUS:.c=.o)

CC 					= 	cc

CFLAGS 				= 	-Wall -Wextra -Werror

HEADER				= 	libft.h


all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rcs $(NAME) $(OBJECTS)
	@echo "Compilation of "$@" complete!"

%.o: %.c $(HEADER)
	@$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJECTS) $(OBJECTS_BONUS)
	@ar rcs $(NAME) $(OBJECTS) $(OBJECTS_BONUS)
	@echo "Compilation BONUS complete!"

clean:
	@rm -rf $(OBJECTS) $(OBJECTS_BONUS)
	@echo "Libft cleaning object files!"

fclean: clean 
	@rm -rf $(NAME)
	@echo "Libft Deleted!"

re: fclean all

.PHONY: all clean fclean re bonus
