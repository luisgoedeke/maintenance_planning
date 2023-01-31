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

void read_file_stationary_machine(std::vector<std::shared_ptr<Stationary_machine>> &stationary_machines)
{

    std::string file_contents = read_file_to_string("Stationaere_Maschine.txt");

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
    int id = std::stoi(line.substr(0, pos));

    std::string line2 = line.substr(pos+1);
    std::size_t pos2 = line2.find(';');
    std::string name = line2.substr(0,pos2);

    std::string line3 = line2.substr(pos2+1);
    std::size_t pos3 = line3.find(';');
//hier muss entweder id oder der name oder beides stehen (auch noch in write file anpassen)
    int f_id = line3.substr(0,pos3);

    std::string line4 = line3.substr(pos3+1);
    std::size_t pos4 = line4.find(';');
    int weight = std::stoi(line4.substr(0,pos4));

    //Company zuordnen
    //wahrschienlich falsch
    for (const auto& s : companies)
    {
      if(name == s->getname())
      {
        break;
      }
    }
    std::shared_ptr<Employee> company = s;


  stationary_machines.push_back(std::make_shared<Stationary_machine>(id, name, company));

  if (stationary_machines.size() > 1){

      std::sort(stationary_machines.begin(), stationary_machines.end(), [](std::shared_ptr<Stationary_machines> & a, std::shared_ptr<Stationary_machines> & b){return a->get_name() < b->get_name();});

  }
}
}

void read_file_mobile_machines(std::vector<std::shared_ptr<Mobile_machine>> &mobile_machines, std::vector<std::shared_ptr<Company>> &companies)
{

  std::string file_contents = read_file_to_string("Bewegliche_Maschine.txt");

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
  int id = std::stoi(line.substr(0, pos));

  std::string line2 = line.substr(pos+1);
  std::size_t pos2 = line2.find(';');
  std::string name = line2.substr(0,pos2);

  std::string line3 = line2.substr(pos2+1);
  std::size_t pos3 = line3.find(';');
  std::string name = line3.substr(0,pos3);

  std::string line4 = line3.substr(pos3+1);
  std::size_t pos4 = line4.find(';');
  int weight = std::stoi(line4.substr(0,pos4));

for (const auto& s : companies)
{
  if(f_id == s->getid())
  {
    break;
  }
}
std::shared_ptr<Company> company = company[s]

  mobile_machines.push_back(std::make_shared<Mobile_machine>(id, name, company));

  if (mobile_machines.size() > 1){

      std::sort(mobile_machines.begin(), mobile_machines.end(), [](std::shared_ptr<Mobile_machine> & a, std::shared_ptr<Mobile_machine> & b){return a->get_name() < b->get_name();});

  }
}
}

void read_file_maintenance_plan(std::vector<std::shared_ptr<Maintenance_plan>> &maintenance_plans, std::vector<std::shared_ptr<Stationary_machine>> &stationary_machines, std::vector<std::shared_ptr<Mobile_machine>> &mobile_machines, std::vector<std::shared_ptr<Interval>> &intervals, std::vector<std::shared_ptr<Employee>> &employees)
{


  std::shared_ptr<Machine> machine;
  std::shared_ptr<Interval> interval;
  std::shared_ptr<Employee> employee;

  std::string file_contents = read_file_to_string("Wartungsplan.txt");

  int line_count = 0;
  std::string line;
  std::stringstream stream(file_contents);
  while (std::getline(stream, line))
  {
    ++line_count;
  }

for (int i = 3; i <= line_count; i++)
{
//Wartungsplan Daten
  std::string line = get_line(file_contents, i);

  std::size_t pos = line.find(';');
  int id = std::stoi(line.substr(0, pos));

  std::string line2 = line.substr(pos+1);
  std::size_t pos2 = line2.find(';');
  std::string name = line2.substr(0,pos2);

  std::string line3 = line2.substr(pos2+1);
  std::size_t pos3 = line3.find(';');
  std::string required_qualification = line3.substr(0,pos3);

  std::string line4 = line3.substr(pos3+1);
  std::size_t pos4 = line4.find(';');
  int required_qualification_value = std::stoi(line4.substr(0,pos4)) << std::endl;


  i = i+3;
//Maschinendaten
  std::string mline = get_line(file_contents, i);

  std::size_t mpos = mline.find(';');
  int m_id = std::stoi(mline.substr(0, mpos));

  std::string mline2 = mline.substr(mpos+1);
  std::size_t mpos2 = mline2.find(';');
  std::string m_name = mline2.substr(0,mpos2);

  std::string mline3 = mline2.substr(mpos2+1);
  std::size_t mpos3 = mline3.find(';');
  std::string m_firma_name = mline3.substr(0,mpos3);

  i = i+3;
//Intervall Daten
std::string iline = get_line(file_contents, i);

std::size_t ipos = iline.find(';');
char unit = iline.substr(0, ipos)[0];

std::string iline2 = line.substr(ipos+1);
std::size_t ipos2 = iline2.find(';');
int number = std::stoi(iline2.substr(0,ipos2));

i=i+3;
//Mitarbeiter Daten
std::string eline = get_line(file_contents, i);

std::size_t epos = eline.find(';');
std::string last_name = eline.substr(0, epos);

std::string eline2 = eline.substr(epos+1);
std::size_t epos2 = eline2.find(';');
std::string first_name =  eline2.substr(0,epos2);

std::string eline3 = eline2.substr(epos2+1);
std::size_t epos3 = eline3.find(';');
std::string qualification = eline3.substr(0,epos3);

std::string eline4 = eline3.substr(epos3+1);
std::size_t epos4 = eline4.find(';');
int e_id = std::stoi(eline4.substr(0,epos4));

i=i+2;

//Maschine zuordnen
//wahrschienlich falsch
for (const auto& sm : stationary_machines)
{
  if(m_id == sm->getid())
  {
    break;
  }
}
std::shared_ptr<Machine> machine = machine[sm];

for (const auto& mm : mobile_machines)
{
  if(m_id == m->getid())
  {
    break;
  }
}
std::shared_ptr<Machine> machine = machine[mm];

//Employee zuordnen
//wahrschienlich falsch
for (const auto& e : employees)
{
  if(e_id == e->getid())
  {
    break;
  }
}
std::shared_ptr<Employee> employee = e;

//Intervall zuordnen
//wahrschienlich falsch
for (const auto& i : intervals)
{
  if(unit == i->getunit() && number == i->getnumber())
  {
    break;
  }
}
std::shared_ptr<Employee> interval = i;


  maintenance_plans.push_back(std::make_shared<Maintenance_plan>(id, name, machine, interval, required_qualification, required_qualification_value, employee));

  if (maintenance_plans.size() > 1){

      std::sort(maintenance_plans.begin(), maintenance_plans.end(), [](std::shared_ptr<Maintenance_plan> & a, std::shared_ptr<Maintenance_plan> & b){return a->get_id() < b->get_id();});

  }
}
}
