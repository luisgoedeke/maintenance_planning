
main.o: main.cpp
	g++ -Wall main.cpp -o main -std=c++17

company.o: company.cpp company.h
	g++ -Wall .\include\company.cpp -o main -std=c++17

employee.o: employee.cpp employee.h
	g++ -Wall .\include\employee.cpp -o main -std=c++17

interval.o: inter
	g++ -Wall .\include\interval.cpp -o main -std=c++17

machine.o:
	g++ -Wall .\include\machine.cpp -o main -std=c++17

clean:
