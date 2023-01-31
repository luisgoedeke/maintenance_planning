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
    std::vector<std::shared_ptr<Stationary_machine>> stationary_machines;
    std::vector<std::shared_ptr<Mobile_machine>> mobile_machines;
    std::vector<std::shared_ptr<Maintenance_plan>> m_plans;
 
    menu_main(companies, employees, intervals, stationary_machines, mobile_machines, m_plans);

    return 0;




}