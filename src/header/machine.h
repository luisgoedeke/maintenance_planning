#ifndef MACHINE_H
#define MACHINE_H

#include <string>
#include "company.h"

class Machine
{
    protected:
    std::string id;
    std::string name;

    public:
    Machine(std::string a, std::string b){}
    ~Machine(){}
};

class stationary_machine : machine
{
    private:
    std::string location;


}

class mobile_machine : machine
{
    private:
    double weight;
}

#endif