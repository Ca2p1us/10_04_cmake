CC = g++
CFLAGS = -lm
TARGET =
SRCS =
OBJS =
INCDIR =

main:main.o task.o

%.o:%.c

.PHONY:all clean
all:main
clean:
	rm -f main.o task.o
