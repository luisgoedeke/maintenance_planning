#include <iostream>
#include <memory>
#include <string>
#include <vector>


#include "company.h"
#include "comparsion.h"
#include "employee.h"
#include "interval.h"
#include "machine.h"
#include "maintenance_plan.h"

bool interval_comp(std::shared_ptr<Interval> &a, std::shared_ptr<Interval> &b){
    return a->get_total_h() > b->get_total_h();
}