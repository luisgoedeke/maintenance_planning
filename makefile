all: output.o clean

output.o: main.o company.o employee.o interval.o machine.o maintenance_plan.o menu.o add.o delete.o edit.o show.o 
	g++ main.o company.o employee.o interval.o machine.o maintenance_plan.o menu.o add.o delete.o edit.o show.o -o output -std=c++17

main.o: main.cpp company.o employee.o interval.o machine.o menu.o
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

menu.o: ./include/menu.h ./include/menu.cpp
	g++ -c ./include/menu.cpp -std=c++17

add.o: ./include/add.h ./include/add.cpp
	g++ -c ./include/add.cpp -std=c++17

delete.o: ./include/delete.h ./include/delete.cpp
	g++ -c ./include/delete.cpp -std=c++17

edit.o: ./include/edit.h ./include/edit.cpp
	g++ -c ./include/edit.cpp -std=c++17

show.o: ./include/show.h ./include/show.cpp
	g++ -c ./include/show.cpp -std=c++17

clean:
	del main.o company.o employee.o interval.o machine.o maintenance_plan.o menu.o add.o edit.o delete.o