#ifndef MACHINE_H
#define MACHINE_H

#include <string>
#include "company.h"

class Machine
{
    protected:
    int id;
    std::string name;
    Company* company;

    public:
    Machine();
    Machine(int a, std::string b, Company* c);
    ~Machine();
    void print();
};

class Stationary_machine : Machine
{
    private:
    std::string location;

    public:
    Stationary_machine(int a, std::string b, Company* c, std::string d);
    ~Stationary_machine();

};

class Mobile_machine : Machine
{
    private:
    double weight;

    public:
    Mobile_machine(int a, std::string b, Company* c, double d);
    ~Mobile_machine();

};

#endif