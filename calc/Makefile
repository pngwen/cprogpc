CFLAGS=-g -ansi
TARGETS=calc

all:$(TARGETS)
calc: calc.o eval.o execute.o scan.o stack.o
%.o: %.c stock.h
	gcc $(CFLAGS) -c -o $@ $*.c
clean:
	rm -f $(TARGETS) *.o
