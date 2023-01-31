#include <algorithm>
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

int Company::get_id(){
    return this->id;
}
void Company::set_id(int a){
    this->id = a;
}

std::string Company::get_name(){
    return this->name;
}
void Company::set_name(std::string a){
    this->name = a;
} 

std::vector<std::shared_ptr<Employee>> Company::get_employees(){
    return this->employees;
}
void Company::add_employee(std::shared_ptr<Employee> a){
    this->employees.push_back(a);
    if (this->employees.size() > 1){

    std::sort(this->employees.begin(), this->employees.end(), [](std::shared_ptr<Employee> & a, std::shared_ptr<Employee> & b){return a->get_last_name() < b->get_last_name();});

    }
}
void Company::delete_employee(int a){
    this->employees.erase(employees.begin()+a);
}


std::vector<std::shared_ptr<Stationary_machine>> Company::get_stationary_machines(){
    return this->stationary_machines;
}
void Company::add_stationary_machine(std::shared_ptr<Stationary_machine> a){
    this->stationary_machines.push_back(a);
}
void Company::delete_stationary_machine(int a){
    this->stationary_machines.erase(stationary_machines.begin()+a);
}

std::vector<std::shared_ptr<Mobile_machine>> Company::get_mobile_machines(){
    return this->mobile_machines;
}
void Company::add_mobile_machine(std::shared_ptr<Mobile_machine> a){
    this->mobile_machines.push_back(a);
}
void Company::delete_mobile_machine(int a){
    this->mobile_machines.erase(mobile_machines.begin()+a);
}