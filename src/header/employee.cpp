#include <iostream>
#include <string>
#include <employee.h>

Employee::Employee(std::string a, std::string b, std::string c){
    this->id = a;
    this->name = b;
    this->qualification = c;
  }

Employee::~Employee(){}

std::string Employee::get_id(){
    return this->id;
  }

void Employee::set_id(std::string a){
    this->id = a;
  }

std::string Employee::get_name(){
    return this->name;
  }

void Employee::set_name(std::string a){
    this->name = a;
  }

std::string Employee::get_qualification(){
    return this->qualification;
  }

void Employee::set_qualification(std::string a){
    this->qualification = a;
  }