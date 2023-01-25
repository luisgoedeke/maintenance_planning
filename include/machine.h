#ifndef MACHINE_H
#define MACHINE_H

#include <iostream>
#include <string>

#include "company.h"

class Company;

class Machine
{
    protected:
    int id;
    std::string name;
    Company* company;

    public:
    Machine(int a, std::string b, Company* c);
    ~Machine();
    
    int get_id();
    void set_id(int a);

    std::string get_name();
    void set_name(std::string a);

    Company* get_company();
    void set_company(Company* a);

    void print();
};

class Stationary_machine:Machine
{
    private:
    std::string location;

    public:
    Stationary_machine(int a, std::string b, Company* c, std::string d);
    ~Stationary_machine();

};

class Mobile_machine:Machine
{
    private:
    double weight;

    public:
    Mobile_machine(int a, std::string b, Company* c, double d);
    ~Mobile_machine();

};

#endif