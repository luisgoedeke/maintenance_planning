#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "interval.h"
#include "company.h"
#include "employee.h"
#include "machine.h"
#include "maintenance_plan.h"

bool interval_comp(std::shared_ptr<Interval> &a, std::shared_ptr<Interval> &b);