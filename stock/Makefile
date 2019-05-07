CFLAGS=-g -ansi
TARGETS=stock

all:$(TARGETS)
stock: stock.o index.o buy_sell.o current.o gain_loss.o error.o
%.o: %.c stock.h
	gcc $(CFLAGS) -c -o $@ $*.c
clean:
	rm -f $(TARGETS) *.o
