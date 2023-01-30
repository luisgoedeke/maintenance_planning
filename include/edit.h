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