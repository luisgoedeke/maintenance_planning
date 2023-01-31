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

void write_file_interval(std::vector<std::shared_ptr<Interval>> intervals);

void write_file_employee(std::vector<std::shared_ptr<Employee>> employees);

void write_file_company(std::vector<std::shared_ptr<Company>> companies);

void write_file_stationary_machine(std::vector<std::shared_ptr<Stationary_machine>> stationary_machines);

void write_file_mobile_machine(std::vector<std::shared_ptr<Mobile_machine>> mobile_machines);

void write_file_maintenance_plan(std::vector<std::shared_ptr<Maintenance_plan>> maintenance_plans);

#endif
