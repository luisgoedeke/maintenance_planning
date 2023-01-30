#ifndef WRITE_FILE_H
#define WRITE_FILE_H

#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "company.h"
#include "employee.h"
#include "interval.h"
#include "machine.h"
#include "maintenance_plan.h"

write_file_interval(std::vector<std::shared_ptr<Interval>> intervals);

write_file_employee(std::vector<std::shared_ptr<Employee>> employees);

write_file_company(std::vector<std::shared_ptr<Company>> companies);

write_file_machine(std::vector<std::shared_ptr<Machine>> machines);

write_file_maintenance_plan(std::vector<std::shared_ptr<Maintenance_plan>> maintenance_plans);

#endif
