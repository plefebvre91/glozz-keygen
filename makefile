CXX=g++
CFLAGS=-Werror -Wall

all: glozz-cracker

glozz-cracker: glozz-cracker.cpp
	$(CXX) $(CFLAGS) $^ -o $@

clean:
	rm -f *.o glozz-cracker
