output.o: main.o machine.o
	g++ main.o machine.o -o output -std=c++17

main.o: main.cpp
	g++ -c main.cpp -std=c++17

machine.o: ./include/machine.h ./include/machine.cpp
	g++ -c ./include/machine.cpp -std=c++17

clean:
	rm *.o