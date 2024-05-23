CC=gcc
CFLAGS=-I.
DEPS= pente.h
OBJ = start_pente.o pente.o

LIBS=-lm

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

pente: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f *.o core pente

