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
