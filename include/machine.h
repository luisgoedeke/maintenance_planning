#ifndef MACHINE_H
#define MACHINE_H

#include <iostream>
#include <memory>
#include <string>

#include "company.h"

class Company;

class Machine
{
    protected:
    int id;
    std::string name;
    std::shared_ptr<Company> company;
    bool is_mobile;

    public:
    Machine(int a, std::string b,std::shared_ptr<Company> c);
    ~Machine();
    
    int get_id();
    void set_id(int a);

    std::string get_name();
    void set_name(std::string a);

    std::shared_ptr<Company> get_company();
    void set_company(std::shared_ptr<Company> a);

    bool get_is_mobile();

    void print();
};

class Stationary_machine: public Machine
{
    private:
    std::string location;

    public:
    Stationary_machine(int a, std::string b, std::shared_ptr<Company> c, std::string d);
    ~Stationary_machine();

    std::string get_location();
    void set_location(std::string a);

};

class Mobile_machine: public Machine
{
    private:
    double weight;

    public:
    Mobile_machine(int a, std::string b, std::shared_ptr<Company> c, double d);
    ~Mobile_machine();

    double get_weight();
    void set_weight(double a);

};

#endif