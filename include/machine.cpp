#include <iostream>
#include <string>
#include "machine.h"

Machine::Machine(){}

Machine::Machine(int a, std::string b, Company* c){
    this->id = a;
    this->name = b;
    this->company = c;
}
Machine::~Machine(){}

void Machine::print(){
    std::cout<<"Ich bin eine Maschine"<<std::endl;
}

Stationary_machine::Stationary_machine(int a, std::string b, Company* c, std::string d){
    Machine(a, b, c);
    this->location = d;
}

Stationary_machine::~Stationary_machine(){}

Mobile_machine::Mobile_machine(int a, std::string b, Company* c, double d){
    Machine(a, b, c);
    this->weight = d;
}

Mobile_machine::~Mobile_machine(){}