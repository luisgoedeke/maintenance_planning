#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "include\interval.h"
#include "include\company.h"
#include "include\employee.h"
#include "include\machine.h"
#include "include\maintenance_plan.h"

#include "include\menu.h"



int main(){
    std::vector<std::shared_ptr<Company>> companies;
    std::vector<std::shared_ptr<Employee>> employees;
    std::vector<std::shared_ptr<Interval>> intervals;
    std::vector<std::shared_ptr<Machine>> machines;
    std::vector<std::shared_ptr<Maintenance_plan>> m_plans;

    menu_main(companies, employees, intervals, machines, m_plans);
/*

    auto y = std::make_shared<Interval>('x',10);

    intervals.push_back(y);

    std::cout<<y.use_count() <<std::endl;

    intervals.erase(intervals.begin());

    std::cout<<y.use_count() <<std::endl;
*/

    return 0;




}