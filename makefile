main: main.o funcs.o
	g++ -o main -std=c++11 main.o funcs.o

tests: tests.o funcs.o
	g++ -o tests -std=c++11 tests.o funcs.o

main.o: main.cpp time.h movie.h timeslot.h
	g++ -c -std=c++11 main.cpp

tests.o: tests.cpp doctest.h time.h movie.h timeslot.h
	g++ -c -std=c++11 tests.cpp

clean:
	rm -f main.o funcs.o main 