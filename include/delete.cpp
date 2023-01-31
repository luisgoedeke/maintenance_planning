#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "company.h"
#include "delete.h"
#include "employee.h"
#include "interval.h"
#include "machine.h"
#include "maintenance_plan.h"
#include "show.h"

void delete_interval (std::vector<std::shared_ptr<Interval>> &intervals){

    int position;

    show_intervals(intervals);
    std::cout << "Bitte geben Sie die Nummer des Intervalls ein, dass geloescht werden soll:" << std::endl;

    std::cin >> position;

    if (position < intervals.size()+1){
        intervals.erase(intervals.begin()+position);
    }


}

void delete_employee (std::vector<std::shared_ptr<Employee>> &employees, std::vector<std::shared_ptr<Company>> &companies){

    int position;

    show_employees(employees);
    std::cout << "Bitte geben Sie die Nummer des Mitarbeiters ein, der geloescht werden soll:" << std::endl;

    std::cin >> position;

    int employee_id = employees[position]->get_id();

    int counter_c = 0;
    int counter_e = 0;

    for (const auto& c : companies){
        std::vector<std::shared_ptr<Employee>> empl = c->get_employees();
        for (const auto& e : empl){
            if(employee_id == e->get_id()){
                c->delete_employee(counter_e);
            }
            counter_e++;
        }
        counter_e = 0;
    }

    if (position < employees.size()+1){
        employees.erase(employees.begin()+position);
    }


}

void delete_company (std::vector<std::shared_ptr<Company>> &companies){

    int position;

    show_companies(companies);
    std::cout << "Bitte geben Sie die Nummer der Firma ein, dass geloescht werden soll:" << std::endl;

    std::cin >> position;

    if (position < companies.size()+1){
        companies.erase(companies.begin()+position);
    }


}

void delete_machine (std::vector<std::shared_ptr<Stationary_machine>> &stationary_machines,std::vector<std::shared_ptr<Mobile_machine>> &mobile_machines, std::vector<std::shared_ptr<Company>> &companies){

    int auswahl;
    int position;
    std::shared_ptr<Company> company;
    std::cout << "Was für eine Art Maschine moechten Sie loeschen?" << std::endl;
    std::cout << "1 Stationaere Maschine"  << std::endl;
    std::cout << "2 Mobile Maschine" << std::endl;
    std::cout << "3 Abbrechen" << std::endl;
    std::cin >>auswahl;
    if (auswahl == 1){
        show_stationary_machines(stationary_machines);
        std::cin>>position;
        company = stationary_machines[position]->get_company();
        int machine_id = stationary_machines[position]->get_id();
        std::vector<std::shared_ptr<Stationary_machine>> company_machines = company->get_stationary_machines();
        int counter = 0;

        for (const auto& cm : company_machines ){
            if (cm->get_id() == machine_id){
                company->delete_stationary_machine(counter);
            }
            counter++;
        }

        if (position < stationary_machines.size()+1){
        stationary_machines.erase(stationary_machines.begin()+position);
        }

    }else if (auswahl == 2){
        show_mobile_machines(mobile_machines);
        std::cin>>position;
        company = mobile_machines[position]->get_company();
        int machine_id = mobile_machines[position]->get_id();
        std::vector<std::shared_ptr<Mobile_machine>> company_machines = company->get_mobile_machines();
        int counter = 0;

        for (const auto& cm : company_machines ){
            if (cm->get_id() == machine_id){
                company->delete_stationary_machine(counter);
            }
            counter++;
        }

        if (position < mobile_machines.size()+1){
        mobile_machines.erase(mobile_machines.begin()+position);
        }

    }else if (auswahl == 3){

    }
}