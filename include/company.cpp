#include <iostream>
#include <memory>
#include <string>

#include "company.h"
#include "employee.h"
#include "machine.h"


Company::Company(int a, std::string b){
    this->id = a;
    this->name = b;
}
Company::~Company(){}

std::string get_id();
void set_id(int a);

std::vector<std::shared_ptr<Employee>> Company::get_employees(){
    return this->employees;
}
void Company::add_employee(std::shared_ptr<Employee> a){
    this->employees.push_back(a);
}
void Company::delete_employee(int a){
}


std::vector<std::shared_ptr<Machine>> Company::get_machines(){
    return this->machines;
}
void Company::add_machine(std::shared_ptr<Machine> a){
    this->machines.push_back(a);
}
void Company::delete_machine(int a){
}