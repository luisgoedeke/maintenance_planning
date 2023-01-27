#ifndef MAINTENANCE_PLAN_H
#define MAINTENANCE_PLAN_H

#include <string>
#include <memory>
#include <iostream>

#include "employee.h"
#include "interval.h"
#include "machine.h"


class Maintenance_plan{

    private:

    int id;
    std::string name;
    std::shared_ptr<Machine> machine;
    std::shared_ptr<Interval> interval;
    std::string required_qualification;
    int required_qualification_value;
    std::shared_ptr<Employee> employee;


    public:
    
    Maintenance_plan(int a, std::string b, std::shared_ptr<Machine> c, std::shared_ptr<Interval> d, std::string e, int f, std::shared_ptr<Employee> g);
    ~Maintenance_plan();

    int get_id();
    void set_id(int a);

    std::shared_ptr<Machine> get_machine();
    void set_machine(std::shared_ptr<Machine> a);

    std::shared_ptr<Interval> get_interval();
    void set_interval(std::shared_ptr<Interval> a);

    std::string get_required_qualification();
    void set_required_qualification(std::string a);

    int get_required_qualification_value();
    void set_required_qualification_value(int a);

    std::shared_ptr<Employee> get_employee();
    void set_employee(std::shared_ptr<Employee> a);


};

#endif