#ifndef MAINTENANCE_PLAN_H
#define MAINTENANCE_PLAN_H

#include <string>
#include <iostream>

#include "employee.h"
#include "interval.h"
#include "machine.h"


class Maintenance_plan{

    private:

    int id;
    std::string name;
    Machine* machine;
    Interval* interval;
    std::string required_qualification;
    int required_qualification_value;
    Employee* employee;


    public:
    
    Maintenance_plan(int a, std::string b, Machine* c, Interval* d, std::string e, int f, Employee* g);
    ~Maintenance_plan();

    int get_id();
    void set_id(int a);

    Machine* get_machine();
    void set_machine(Machine* a);

    Interval* get_interval();
    void set_interval(Interval* a);

    std::string get_required_qualification();
    void set_required_qualification(std::string a);

    int get_required_qualification_value();
    void set_required_qualification_value(int a);

    Employee* get_employee();
    void set_employee(Employee* a);


};

#endif