NAME=libft.a

CC=cc
AR=ar
RM=rm -f

CFLAGS=-Wall -Wextra -Werror -c
ARFLAGS=rv

SOURCES=${wildcard ft_*.c}

${NAME}:
	${CC} ${CFLAGS} ${SOURCES}
	${AR} ${ARFLAGS} ${NAME} ${SOURCES:.c=.o}

all: ${NAME}

clean:
	${RM} ${SOURCES:.c=.o}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re