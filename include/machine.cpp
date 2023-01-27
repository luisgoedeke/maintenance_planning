#include <iostream>
#include <memory>
#include <string>

#include "company.h"
#include "machine.h"

Machine::Machine(int a, std::string b, std::shared_ptr<Company> c){
    this->id = a;
    this->name = b;
    this->company = c;
}
Machine::~Machine(){}

int Machine::get_id(){
    return this->id;
}
void Machine::set_id(int a){
    this->id = a;
}

std::string Machine::get_name(){
    return this->name;
}
void Machine::set_name(std::string a){
    this->name = a;
}

std::shared_ptr<Company> Machine::get_company(){
    return this->company;
}
void Machine::set_company(std::shared_ptr<Company> a){
    this->company = a;
}

void Machine::print(){
    std::cout<<"Ich bin eine Maschine"<<std::endl;
}

Stationary_machine::Stationary_machine(int a, std::string b, std::shared_ptr<Company> c, std::string d) : Machine (a,b,c){
    this->location = d;
}

Stationary_machine::~Stationary_machine(){}

Mobile_machine::Mobile_machine(int a, std::string b, std::shared_ptr<Company> c, double d) : Machine(a,b,c){
    this->weight = d;
}

Mobile_machine::~Mobile_machine(){}
