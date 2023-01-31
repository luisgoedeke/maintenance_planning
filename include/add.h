#ifndef ADD_H
#define ADD_H

#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "company.h"
#include "employee.h"
#include "interval.h"
#include "machine.h"
#include "maintenance_plan.h"
#include "menu.h"
#include "show.h"

void add_interval (std::vector<std::shared_ptr<Interval>> &intervals);

void add_employee (std::vector<std::shared_ptr<Employee>> &employees);

void add_company (std::vector<std::shared_ptr<Company>> &companies);

void add_machine (std::vector<std::shared_ptr<Company>> &companies, std::vector<std::shared_ptr<Stationary_machine>> &stationary_machines, std::vector<std::shared_ptr<Mobile_machine>> &mobile_machines);

void add_maintenance_plan (std::vector<std::shared_ptr<Company>> &companies, std::vector<std::shared_ptr<Employee>> &employees, std::vector<std::shared_ptr<Interval>> &intervals, std::vector<std::shared_ptr<Stationary_machine>> &stationary_machines, std::vector<std::shared_ptr<Mobile_machine>> &mobile_machines, std::vector<std::shared_ptr<Maintenance_plan>> &m_plans);

#endif