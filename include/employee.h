#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

class Employee
{
  private:

  int id;
  std::string first_name;
  std::string last_name;
  std::string qualification;

  public:

  Employee(int a, std::string b, std::string c, std::string d);
  ~Employee();
  int get_id();
  void set_id(int a);
  std::string get_first_name();
  void set_first_name(std::string a);
  std::string get_last_name();
  void set_last_name(std::string a);
  std::string get_qualification();
  void set_qualification(std::string a);


};

#endif