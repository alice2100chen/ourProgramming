CXX	= clang++
CXXFLAGS	= -std=c++17 -Wall

SRCS	= $(wildcard *.cpp)
PROGS	= $(SRCS:.cpp=.out)

.PHONY: all
all: $(PROGS)
%.out: %.cpp
	$(CXX) -o $@ $< $(CFLAGS)


.PHONY: clean
clean:
	rm -f *.out
