#include <iostream>
#include <string>
#include "machine.h"

Machine::Machine(){}

Machine::Machine(int a, std::string b){
    this->id = a;
    this->name = b
}
Machine::~Machine(){}

void Machine::print(){
    std::cout<<"Ich bin eine Maschine"<<std::endl;
}