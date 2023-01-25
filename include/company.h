#ifndef COMPANY_H
#define COMPANY_H

#include <iostream>
#include <string>
#include <vector>

#include "employee.h"
#include "machine.h"

class Machine;

class Company
{
  private:

  int id;
  std::string name;
  std::vector<Employee*> employees;
  std::vector<Machine*> machines;

  public:

  Company(int a, std::string b);
  ~Company();

  std::string get_id();
  void set_id(int a);

  std::vector<Employee*> get_employees();
  void add_employee(Employee* a);
  void delete_employee(int a);

  std::vector<Machine*> get_machines();
  void add_machine(Machine* a);
  void delete_machine(int a);
   
};

#endif