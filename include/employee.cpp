#include <iostream>
#include <memory>
#include <string>

#include "employee.h"

Employee::Employee(int a, std::string b, std::string c, std::string d){
    this->id = a;
    this->first_name = b;
    this->last_name = c;
    this->qualification = d;
  }

Employee::~Employee(){}

int Employee::get_id(){
    return this->id;
  }

void Employee::set_id(int a){
    this->id = a;
  }

std::string Employee::get_first_name(){
    return this->first_name;
  }

void Employee::set_first_name(std::string a){
    this->first_name = a;
  }

std::string Employee::get_last_name(){
    return this->last_name;
  }

void Employee::set_last_name(std::string a){
    this->last_name = a;
  }

std::string Employee::get_qualification(){
    return this->qualification;
  }

void Employee::set_qualification(std::string a){
    this->qualification = a;
  }

  int Employee::get_qualification_value(){
    return this->qualification_value;
  }

  void Employee::set_qualification_value(int a){
    this->qualification_value = a;
  }