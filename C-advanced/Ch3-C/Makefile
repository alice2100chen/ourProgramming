CC	= gcc
CFLAGS	= -std=c99 -Wall -lm

SRCS	= $(wildcard *.c)
PROGS	= $(SRCS:.c=.out)

.PHONY: all
all: $(PROGS)
%.out: %.c
	$(CC) -o $@ $< $(CFLAGS)


.PHONY: clean
clean:
	rm -f *.out
