#include <algorithm>
#include <fstream>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <sstream>

#include "company.h"
#include "employee.h"
#include "interval.h"
#include "machine.h"
#include "maintenance_plan.h"
#include "read_file.h"

//Hilfsfunktionen
std::string read_file_to_string(const std::string &file_path) {
  std::ifstream file(file_path);
  std::stringstream buffer;
  buffer << file.rdbuf();
  return buffer.str();
}

std::string get_line(const std::string &text, int line_number) {
  std::string line;
  std::stringstream stream(text);
  for (int i = 1; std::getline(stream, line) && i < line_number; ++i) {}
  return line;
}
//

void read_file_interval(std::vector<std::shared_ptr<Interval>> &intervals)
{

  std::string file_contents = read_file_to_string("Interval.txt");

  int line_count = 0;
  std::string line;
  std::stringstream stream(file_contents);
  while (std::getline(stream, line))
  {
    ++line_count;
  }

for (int i = 3; i <= line_count; i++)
{
  std::string line = get_line(file_contents, i);

  std::size_t pos = line.find(';');
  char unit = line.substr(0, pos)[0];
  std::string line2 = line.substr(pos+1);
  std::size_t pos2 = line2.find(';');
  int number = std::stoi(line2.substr(0,pos2));

  intervals.push_back(std::make_shared<Interval>(unit, number));

  if (intervals.size() > 1){

      std::sort(intervals.begin(), intervals.end(), [](std::shared_ptr<Interval> & a, std::shared_ptr<Interval> & b){return a->get_total_h() < b->get_total_h();});

  }
}
}

void read_file_employee(std::vector<std::shared_ptr<Employee>> &employees)
{


  std::string file_contents = read_file_to_string("Mitarbeiter.txt");

  int line_count = 0;
  std::string line;
  std::stringstream stream(file_contents);
  while (std::getline(stream, line))
  {
    ++line_count;
  }

for (int i = 3; i <= line_count; i++)
{
  std::string line = get_line(file_contents, i);

  std::size_t pos = line.find(';');
  std::string last_name = line.substr(0, pos);

  std::string line2 = line.substr(pos+1);
  std::size_t pos2 = line2.find(';');
  std::string first_name = line2.substr(0,pos2);

  std::string line3 = line2.substr(pos2+1);
  std::size_t pos3 = line3.find(';');
  std::string qualification = line3.substr(0,pos3);

  std::string line4 = line3.substr(pos3+1);
  std::size_t pos4 = line4.find(';');
  int id = std::stoi(line4.substr(0,pos4));

  employees.push_back(std::make_shared<Employee>(id, first_name, last_name, qualification));

  if (employees.size() > 1){

      std::sort(employees.begin(), employees.end(), [](std::shared_ptr<Employee> & a, std::shared_ptr<Employee> & b){return a->get_last_name() < b->get_last_name();});

  }
}
}

void read_file_company(std::vector<std::shared_ptr<Company>> &companies)
{

  std::string file_contents = read_file_to_string("Firma.txt");

  std::istringstream inputStream(file_contents);
  std::string lin;

  int lineNumber = 1;

  while (std::getline(inputStream, lin))
  {
      if (lin.find("ID;Firmenname;") != std::string::npos)
      {

        std::string line = get_line(file_contents, lineNumber+1);
        std::size_t pos = line.find(';');
        int id = std::stoi(line.substr(0, pos));
        std::string line2 = line.substr(pos+1);
        std::size_t pos2 = line2.find(';');
        std::string name = line2.substr(0,pos2);

      companies.push_back(std::make_shared<Company>(id, name));

      if (companies.size() > 1){

          std::sort(companies.begin(), companies.end(), [](std::shared_ptr<Company> & a, std::shared_ptr<Company> & b){return a->get_name() < b->get_name();});

      }

        }
        lineNumber++;
    }


}
/*
void read_file_machine(std::vector<std::shared_ptr<Machine>> &machines)
{

  int id;
  std::string name;
  std::shared_ptr<Company> company;

  machines.push_back(std::make_shared<Machine>(id, name, company));

  if (machines.size() > 1){

      std::sort(machines.begin(), machines.end(), [](std::shared_ptr<Machine> & a, std::shared_ptr<Machine> & b){return a->get_name() < b->get_name();});

  }
}

void read_file_maintenance_plan(std::vector<std::shared_ptr<Maintenance_plan>> &maintenance_plans)
{

  int id;
  std::string name;
  std::shared_ptr<Machine> machine;
  std::shared_ptr<Interval> interval;
  std::string required_qualification;
  int required_qualification_value;
  std::shared_ptr<Employee> employee;

  maintenance_plans.push_back(std::make_shared<Maintenance_plan>(id, name, machine, interval, required_qualification, required_qualification_value, employee));

  if (maintenance_plans.size() > 1){

      std::sort(maintenance_plans.begin(), maintenance_plans.end(), [](std::shared_ptr<Maintenance_plan> & a, std::shared_ptr<Maintenance_plan> & b){return a->get_id() < b->get_id();});

  }
}
*/