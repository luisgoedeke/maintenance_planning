#ifndef SHOW_H
#define SHOW_H

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

void show_companies (std::vector<std::shared_ptr<Company>> &companies);

void show_stationary_machines (std::vector<std::shared_ptr<Stationary_machine>> &stationary_machines);

void show_mobile_machines (std::vector<std::shared_ptr<Mobile_machine>> &mobile_machines);