#ifndef READ_FILE_H
#define READ_FILE_H

#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "company.h"
#include "employee.h"
#include "interval.h"
#include "machine.h"
#include "maintenance_plan.h"

std::string read_file_to_string(const std::string &file_path);

std::string get_line(const std::string &text, int line_number);

void read_file_interval(std::vector<std::shared_ptr<Interval>> &intervals);

void read_file_employee(std::vector<std::shared_ptr<Employee>> &employees);

void read_file_company(std::vector<std::shared_ptr<Company>> &companies);

void read_file_machine(std::vector<std::shared_ptr<Machine>> &machines);

void read_file_maintenance_plan(std::vector<std::shared_ptr<Maintenance_plan>> &maintenance_plans);

#endif
