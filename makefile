all: output.o clean

output.o: main.o company.o employee.o interval.o machine.o maintenance_plan.o
	g++ main.o company.o employee.o interval.o machine.o maintenance_plan.o -o output -std=c++17

main.o: main.cpp company.o employee.o interval.o machine.o
	g++ -c main.cpp -std=c++17

company.o: ./include/company.h ./include/company.cpp
	g++ -c ./include/company.cpp -std=c++17

employee.o: ./include/employee.h ./include/employee.cpp
	g++ -c ./include/employee.cpp -std=c++17

interval.o: ./include/interval.h ./include/interval.cpp
	g++ -c ./include/interval.cpp -std=c++17

machine.o: ./include/machine.h ./include/machine.cpp
	g++ -c ./include/machine.cpp -std=c++17

maintenance_plan.o: ./include/maintenance_plan.h ./include/maintenance_plan.cpp
	g++ -c ./include/maintenance_plan.cpp -std=c++17


clean:
	del main.o company.o employee.o interval.o machine.o maintenance_plan.o