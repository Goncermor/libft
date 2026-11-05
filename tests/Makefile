CC=cc
CFLAGS=-Wall -Wextra -Werror

SOURCES=${wildcard *.c}
PROGRAMS=${SOURCES:.c=}

OUT_DIR=bin/
LIB_FT=../libft.a

all: ../libft.a bin/ ${PROGRAMS}
%: %.c
	${CC} ${CFLAGS} ${@}.c -o ${OUT_DIR}${@}

# requisites
bin/:
	mkdir bin

fclean:
	rm -r bin/

re: fclean all

