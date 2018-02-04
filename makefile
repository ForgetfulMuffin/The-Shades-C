#---- makefile ----
CC=gcc -std=c99
CFLAGS=-U__STRICT_ANSI__ -fno-common\
       -Wall -Wextra -Wc++-compat -Werror -pedantic
LDFLAGS= -lncurses

all : The-Shades

#labGen: ./labGen/labGen.o
#	${CC} -o ./labGen/labGen ./labGen/labGen.o ${LDFLAGS}

The-Shades : labGen/labGen.o The-Shades.o
	${CC} -o The-Shades labGen/labGen.o The-Shades.o ${LDFLAGS}

labGen/labGen.o: labGen/labGen.c labGen/labGen.h
	${CC} ${CFLAGS} -o labGen/labGen.o -c labGen/labGen.c

The-Shades.o: The-Shades.c
	${CC} ${CFLAGS} -o The-Shades.o -c The-Shades.c

clean:
	rm -f The-Shades *.o labGen/labGen.o
