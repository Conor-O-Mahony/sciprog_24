CC = gcc #C compiler
#CCFLAGS = -03
#LDFLAGS = -lm
CPROGS = $(shell ls *.c)
OBJ = $(CPROGS:.c=.o)

all: prog

prog: $(OBJ)
	$(CC) -o $@ $^ #$(LDFLAGS)  -> $@ = target name, i.e. prog. $^ = $(OBJ)

$(OBJ):
	$(CC) -c $(@:.o=.c) #$(CCFLAGS)
clean:
	/bin/rm -f *.o
