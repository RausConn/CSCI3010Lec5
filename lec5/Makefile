# makefile for Library.cpp, Library.h, and run_library.cpp

# define the C++ compiler to use
CXX = g++

# define any compile-time flags
CXXFLAGS = -Wall -g

all: run_library

run_library: Library.o run_library.o
	$(CXX) $(CXXFLAGS) -o run_library Library.o run_library.o

Library.o: Library.cpp Library.h

run_library.o: run_library.cpp Library.h

clean:
	rm *.o run_library