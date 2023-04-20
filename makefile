main: main.o time.o
	g++ -o main -std=c++11 main.o time.o

tests: tests.o time.o
	g++ -o tests -std=c++11 tests.o time.o

main.o: main.cpp time.h
	g++ -c -std=c++11 main.cpp

tests.o: tests.cpp doctest.h time.h
	g++ -c -std=c++11 tests.cpp

clean:
	rm -f main.o time.o main 