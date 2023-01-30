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

void delete_employee (std::vector<std::shared_ptr<Employee>> &employees){

    int position;

    show_employees(employees);
    std::cout << "Bitte geben Sie die Nummer des Mitarbeiters ein, dass geloescht werden soll:" << std::endl;

    std::cin >> position;

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

void delete_machine (std::vector<std::shared_ptr<Stationary_machine>> &stationary_machines,std::vector<std::shared_ptr<Mobile_machine>> &mobile_machines){

    int auswahl;
    int position;
    std::cout << "Was für eine Art Maschine möchten Sie löschen?" << std::endl;
    std::cout << "1 Stationaere Maschine"  << std::endl;
    std::cout << "2 Mobile Maschine" << std::endl;
    std::cout << "3 Abbrechen" << std::endl;
    std::cin >>auswahl;
    if (auswahl == 1){
        show_stationary_machines(stationary_machines);
        std::cin>>position;

    }else if (auswahl == 2){

    }else if (auswahl == 3){

    }
}