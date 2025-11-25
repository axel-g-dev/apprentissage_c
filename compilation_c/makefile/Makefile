main: main.o carre.o
	g++ -o main main.o carre.o

main.o: main.cpp carre.h
	g++ -c main.cpp

carre.o: carre.cpp carre.h
	g++ -c carre.cpp

clean:
	rm -f main *.o

CXX      = g++
CXXFLAGS = -Wall -Wextra -std=c++20
OBJ      = main.o carre.o

main: $(OBJ)
	$(CXX) $(CXXFLAGS) -o main $(OBJ)

clean:
	rm -f *.o main
.PHONY: clean