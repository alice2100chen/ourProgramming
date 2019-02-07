CXX = g++
CFLAGS = -std=c++11 -Wall
SRCS = $(wildcard *.cpp)
PROGS = $(patsubst %.cpp,%,$(SRCS))

.PHONY: all
all: $(PROGS)
%: %.cpp
	$(CXX) -o $@.out $< $(CFLAGS)

.PHONY: clean
clean:
	rm -f *.out
