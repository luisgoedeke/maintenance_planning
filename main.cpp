#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "include\interval.h"
#include "include\company.h"
#include "include\employee.h"
#include "include\machine.h"
#include "include\maintenance_plan.h"

void menu_add (std::vector<std::shared_ptr<Company>> &companies, std::vector<std::shared_ptr<Employee>> &employees, std::vector<std::shared_ptr<Interval>> &intervals, std::vector<std::shared_ptr<Machine>> &machines, std::vector<std::shared_ptr<Maintenance_plan>> &m_plans){
    bool menu_active = true;
    
    while (menu_active){

    }
}

void menu_main(std::vector<std::shared_ptr<Company>> &companies, std::vector<std::shared_ptr<Employee>> &employees, std::vector<std::shared_ptr<Interval>> &intervals, std::vector<std::shared_ptr<Machine>> &machines, std::vector<std::shared_ptr<Maintenance_plan>> &m_plans){

    bool menu_active = true;

    while (menu_active){
        std::cout << "### Hauptmenue ###" << std::endl;
        std::cout << "Was moechten Sie tun? Bitte geben Sie die Zahl des Menuepunktes ein." << std::endl;
        std::cout << "1 Daten laden" << std::endl;
        std::cout << "2 Daten speichern" << std::endl;
        std::cout << "3 Anlegen" << std::endl;
        std::cout << "4 Bearbeiten" << std::endl;
        std::cout << "5 Löschen" << std::endl;
        std::cout << "6 Anzeigen" << std::endl;
        std::cout << "7 Programm beenden" << std::endl;

        int auswahl;
        std::cin >> auswahl;

        if(auswahl == 1){

        }else if(auswahl == 2){
            
        }else if (auswahl == 3){
            add(companies, employees, intervals, machines, m_plans);

        }else if (auswahl == 4){

        }
        else if (auswahl == 5){

        }else if (auswahl == 6){

        }else if (auswahl == 7){
            std::cout << "Programm wird beendet." << std::endl;
            menu_active = false;
        }
        else{
            std::cout << "EIngabe ungueltig, bitte wiederholen" << std::endl;
        }

    }

}

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