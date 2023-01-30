#include <iostream>
#include <memory>
#include <string>

#include "maintenance_plan.h"

Maintenance_plan::Maintenance_plan(int a, std::string b, std::shared_ptr<Machine> c, std::shared_ptr<Interval> d, std::string e, int f, std::shared_ptr<Employee> g){
    this->id = a;
    this->name = b;
    this->machine = c;
    this->interval = d;
    this->required_qualification = e;
    if(e == "Auszubildener"){
        this->required_qualification_value = 0;
    }
    if(e == "Geselle"){
        this->required_qualification_value = 1;
    }
    if(e == "Meister"){
        this->required_qualification_value = 2;
    }
    this->employee = g;

}

Maintenance_plan::~Maintenance_plan(){}

int Maintenance_plan::get_id(){
    return this->id;
}

void Maintenance_plan::set_id(int a){
    this->id = a;
}

std::string Maintenance_plan::get_name(){
    return this->name;
}
void Maintenance_plan::set_name(std::string a){
    this->name = a;
}

std::shared_ptr<Machine> Maintenance_plan::get_machine(){
    return this->machine;
}

void Maintenance_plan::set_machine(std::shared_ptr<Machine> a){
    this->machine = a;
}

std::shared_ptr<Interval> Maintenance_plan::get_interval(){
    return this->interval;
}
void Maintenance_plan::set_interval(std::shared_ptr<Interval> a){
    this->interval = a;
}

std::string Maintenance_plan::get_required_qualification(){
    return this->required_qualification;
}

void Maintenance_plan::set_required_qualification(std::string a){
    this->required_qualification = a;
    if(a == "Auszubildener"){
        this->required_qualification_value = 0;
    }
    if(a == "Geselle"){
        this->required_qualification_value = 1;
    }
    if(a == "Meister"){
        this->required_qualification_value = 2;
    }
}

int Maintenance_plan::get_required_qualification_value(){
    return this->required_qualification_value;
}

void Maintenance_plan::set_required_qualification_value(int a){
    this->required_qualification_value = a;
}

std::shared_ptr<Employee> Maintenance_plan::get_employee(){
    return this->employee;
}

void Maintenance_plan::set_employee(std::shared_ptr<Employee> a){
    this->employee = a;
}