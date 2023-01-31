#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "company.h"
#include "employee.h"
#include "interval.h"
#include "machine.h"
#include "maintenance_plan.h"
#include "show.h"

void show_intervals (std::vector<std::shared_ptr<Interval>> &intervals){

    int counter = 0;

    for (const auto& s : intervals){ 

        std::cout << counter << ": " << "Einheit: " << s->get_unit() << "; Laenge: " << s->get_number() <<";" << " In Stunden: " << s->get_total_h() << std::endl;
        counter++;
    }
}

void show_employees (std::vector<std::shared_ptr<Employee>> &employees){

    int counter = 0;

    for (const auto& s : employees){ 

        std::cout << counter << ": " << "Nachname: " << s->get_last_name() << "; Vorname: " << s->get_first_name() <<"; " << "Qualifikation: " << s->get_qualification() << "; " << "ID: " << s->get_id() <<std::endl;
        counter++;
    }
}

void show_companies (std::vector<std::shared_ptr<Company>> &companies){
    
    int counter = 0;

    for (const auto& s : companies){ 

        std::cout << counter << ": " << "Name: " << s->get_name() << "ID: " << s->get_id() <<std::endl;
        std::vector<std::shared_ptr<Employee>> employees = s->get_employees();
        //std::vector<std::shared_ptr<Stationary_Machine>> stationary_machines = s->get_stationary_machines();
        //std::vector<std::shared_ptr<Mobile_Machine>> stationary_machines = s->get_mobile_machines();

        std::cout << "Mitarbeiter:" << std::endl;

        for (const auto& t : employees){ 

        std::cout << "Nachname: " << t->get_last_name() << "; Vorname: " << t->get_first_name() <<"; " << "Qualifikation: " << t->get_qualification() << "; " << "ID: " << t->get_id() <<std::endl;
        }

        std::cout << "Maschinen:" << std::endl;

        counter++;
    }

}

void show_stationary_machines (std::vector<std::shared_ptr<Stationary_machine>> &stationary_machines){
        int counter = 0;

    for (const auto& s : stationary_machines){ 

            std::cout << counter << ": " << "ID: " << s->get_id() << "; Name: " << s->get_name() << "; Ort:" << s->get_location() << "; Name Firma: " << (s->get_company())->get_name()<< "; ID Firma: " << (s->get_company())->get_id() <<std::endl;
            counter++;


        counter++;
    }

}

void show_mobile_machines (std::vector<std::shared_ptr<Mobile_machine>> &mobile_machines){
        int counter = 0;

    for (const auto& s : mobile_machines){ 

            std::cout << counter << ": " << "ID: " << s->get_id() << "; Name: " << s->get_name() << "; Gewicht:" << s->get_weight() << "; Name Firma: " << (s->get_company())->get_name()<< "; ID Firma: " << (s->get_company())->get_id() <<std::endl;
            counter++;


        counter++;
    }

}

void show_maintenance_plans (std::vector<std::shared_ptr<Maintenance_plan>> &m_plans){}
