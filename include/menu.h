#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "company.h"
#include "employee.h"
#include "interval.h"
#include "machine.h"
#include "maintenance_plan.h"

void menu_add (std::vector<std::shared_ptr<Company>> &companies, std::vector<std::shared_ptr<Employee>> &employees, std::vector<std::shared_ptr<Interval>> &intervals, std::vector<std::shared_ptr<Machine>> &machines, std::vector<std::shared_ptr<Maintenance_plan>> &m_plans);

void menu_edit (std::vector<std::shared_ptr<Company>> &companies, std::vector<std::shared_ptr<Employee>> &employees, std::vector<std::shared_ptr<Interval>> &intervals, std::vector<std::shared_ptr<Machine>> &machines, std::vector<std::shared_ptr<Maintenance_plan>> &m_plans);

void menu_delete (std::vector<std::shared_ptr<Company>> &companies, std::vector<std::shared_ptr<Employee>> &employees, std::vector<std::shared_ptr<Interval>> &intervals, std::vector<std::shared_ptr<Machine>> &machines, std::vector<std::shared_ptr<Maintenance_plan>> &m_plans);

void menu_show (std::vector<std::shared_ptr<Company>> &companies, std::vector<std::shared_ptr<Employee>> &employees, std::vector<std::shared_ptr<Interval>> &intervals, std::vector<std::shared_ptr<Machine>> &machines, std::vector<std::shared_ptr<Maintenance_plan>> &m_plans);

void menu_main (std::vector<std::shared_ptr<Company>> &companies, std::vector<std::shared_ptr<Employee>> &employees, std::vector<std::shared_ptr<Interval>> &intervals, std::vector<std::shared_ptr<Machine>> &machines, std::vector<std::shared_ptr<Maintenance_plan>> &m_plans);