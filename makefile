CC=gcc
CFLAGS=-g -c -Wall -Wextra -Wwrite-strings
LFLAGS=-g

base64URL: main.o base64.o
	${CC} ${LFLAGS} -o base64URL main.o base64.o

main.o: main.c
	${CC} ${CFLAGS} main.c

base64.o: base64.c base64.h
	${CC} ${CFLAGS} base64.c