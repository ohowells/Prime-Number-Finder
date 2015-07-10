CXX=clang++
CXXFLAGS=-std=c++11 -o
FILE=main.cpp
OBJECT=prime.o

default:
	$(CXX) $(CXXFLAGS) $(OBJECT) $(FILE)

clean:
	rm -rf *.o
