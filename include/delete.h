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

void delete_interval (std::vector<std::shared_ptr<Interval>> &intervals);

void delete_employee (std::vector<std::shared_ptr<Employee>> &employees);

void delete_company (std::vector<std::shared_ptr<Employee>> &companies);

void delete_machine (std::vector<std::shared_ptr<Stationary_machine>> &stationary_machines,std::vector<std::shared_ptr<Mobile_machine>> &mobile_machines);