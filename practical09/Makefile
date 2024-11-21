CC = gcc
CPROGS = $(shell ls *.c)
OBJ = $(CPROGS:.c=.o)

all: prog

prog: $(OBJ)
	$(CC) -o $@ $^

$(OBJ):
	$(CC) -c $(@:.o=.c)
clean:
	/bin/rm -f *.o
