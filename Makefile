NAME=libft.a

CC=cc
AR=ar
RM=rm -f

CFLAGS=-Wall -Wextra -Werror -c
ARFLAGS=rv

SOURCES=${wildcard ft_*.c}

TESTER_DIR := ../../42_Libft_Tester
TESTER_ARS := --set-timeout-ms 50



${NAME}:
	${CC} ${CFLAGS} ${SOURCES}
	${AR} ${ARFLAGS} ${NAME} ${SOURCES:.c=.o}
	#ranlib

test: $(NAME)
	$(TESTER_DIR)/build.sh ./$(NAME)
	./tester $(TESTER_ARGS)

all: ${NAME}

clean:
	${RM} ${SOURCES:.c=.o}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re test