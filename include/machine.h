#ifndef MACHINE_H
#define MACHINE_H

#include <string>
#include "company.h"

class Machine
{
    protected:
    int id;
    std::string name;

    public:
    Machine(){}
    Machine(int a, std::string b){}
    ~Machine(){}
    void print(){}
};

class Stationary_machine : Machine
{
    private:
    std::string location;


};

class Mobile_machine : Machine
{
    private:
    double weight;
};

#endif