CC=gcc
CFLAGS=-I.
DEPS = player.h
OBJ = server.o player.o room.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

server: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)
