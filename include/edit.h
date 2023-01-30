#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "company.h"
#include "employee.h"
#include "interval.h"
#include "machine.h"
#include "maintenance_plan.h"
#include "show.h"

void edit_interval (std::vector<std::shared_ptr<Interval>> &intervals);

void edit_employees (std::vector<std::shared_ptr<Employee>> &employees);

void edit_companies (std::vector<std::shared_ptr<Company>> &companies, std::vector<std::shared_ptr<Employee>> &employees, std::vector<std::shared_ptr<Stationary_machine>> &stationary_machines,std::vector<std::shared_ptr<Mobile_machine>> &mobile_machines);

void edit_machines (std::vector<std::shared_ptr<Company>> &companies, std::vector<std::shared_ptr<Stationary_machine>> &stationary_machines, std::vector<std::shared_ptr<Mobile_machine>> &mobile_machines);