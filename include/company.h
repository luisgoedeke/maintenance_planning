#ifndef COMPANY_H
#define COMPANY_H

#include <iostream>
#include <memory>
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
  std::vector<std::shared_ptr<Employee>> employees;
  std::vector<std::shared_ptr<Stationary_machine>> stationary_machines;
  std::vector<std::shared_ptr<Mobile_machine>> mobile_machines;

  public:

  Company(int a, std::string b);
  ~Company();

  int get_id();
  void set_id(int a);

  std::string get_name();
  void set_name(std::string a); 

  std::vector<std::shared_ptr<Employee>> get_employees();
  void add_employee(std::shared_ptr<Employee> a);
  void delete_employee(int a);

  std::vector<std::shared_ptr<Stationary_machine>> get_stationary_machines();
  void add_stationary_machine(std::shared_ptr<Stationary_machine> a);
  void delete_stationary_machine(int a);

  std::vector<std::shared_ptr<Mobile_machine>> get_mobile_machines();
  void add_mobile_machine(std::shared_ptr<Mobile_machine> a);
  void delete_mobile_machine(int a);
   
};

#endif