#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "company.h"
#include "employee.h"
#include "interval.h"
#include "machine.h"
#include "maintenance_plan.h"

void show_intervals (std::vector<std::shared_ptr<Interval>> &intervals);

void show_employees (std::vector<std::shared_ptr<Employee>> &employees);