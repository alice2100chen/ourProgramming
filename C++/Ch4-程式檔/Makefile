CXX	= g++
CFLAGS	= -std=c++11 -Wall

SRCS	= $(wildcard *.cpp)
PROGS	= $(SRCS:.cpp=.out)

.PHONY: all
all: $(PROGS)
$(PROGS): *.cpp
	$(CXX) -o $@ $< $(CFLAGS)


.PHONY: clean
clean:
	rm -f *.out
