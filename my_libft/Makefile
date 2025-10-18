#####################################################
## ARGUMENTS

NAME		= ban #libft.a
HEADER		= libft.h
CFLAGS		= -Wall -Wextra -Werror
CC			= cc

#####################################################
## SOURCES

SRC_FILES	= ft_isalpha.c main.c
OBJ_FILES	= ${SRC_FILES:.c=.o}

#####################################################
## RULES

all: ${NAME} 

 ${NAME}: ${OBJ_FILES}
	${CC} ${OBJ_FILES} -o ${NAME}

#%.o: %.c
#	${CC} ${CFLAGS} -c $< -o $@
#
#${NAME}: ${OBJ_FILES}
#	ar -rcs ${NAME} ${OBJ_FILES}

%.o: %.c ${HEADER}
	${CC} -c ${CFLAGS} $<

clean:
	rm -rf ${OBJ_FILES}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re 
