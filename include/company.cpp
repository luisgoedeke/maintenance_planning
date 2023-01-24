#include <iostream>
#include <string>

#include "company.h"
#include "employee.h"

Company::Company(int a, std::string b)){
    this->id = a;
    this->name = b;
}
Company::~Company(){

}

std::string Company::get_id();
void Company::set_id(int a);

std::vector<Employee*> Company::get_employees();
void Company::add_employee(Employee* a);

std::vector<Machine*> get_machines();
void add_machine(Machine* a);