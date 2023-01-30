#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "add.h"
#include "company.h"
#include "employee.h"
#include "interval.h"
#include "machine.h"
#include "maintenance_plan.h"
#include "show.h"

void add_interval (std::vector<std::shared_ptr<Interval>> &intervals){

    bool menu_active = true;

    char unit;
    int number;
    

 while (menu_active){
        std::cout << "### Intervall Anlegen ###" << std::endl;
        std::cout << "Welche Einheit soll das angelegte Intervall haben? Bitte geben Sie die Zahl der Option." << std::endl;
        std::cout << "1: Stunden" << std::endl;
        std::cout << "2: Tage" << std::endl;
        std::cout << "3: Wochen" << std::endl;
        std::cout << "4: Monate" << std::endl;
        std::cout << "5: Abbruch" << std::endl;

        int auswahl;
        std::cin >> auswahl;

        if(auswahl == 1){

            unit = 'h';

        }else if(auswahl == 2){

            unit = 'd';
            
        }else if (auswahl == 3){
            
            unit = 'w';

        }else if (auswahl == 4){

            unit = 'm';

        }else if (auswahl == 5){

            std::cout << "Abbruch." << std::endl;
            menu_active = false;
            break;

        }
        else{
            std::cout << "Eingabe ungueltig, bitte wiederholen" << std::endl;
        }

        std::cout << "Welche Dauer soll das angelegte Intervall haben?" << std::endl;
        std::cin >> number;

        intervals.push_back(std::make_shared<Interval>(unit, number));

        if (intervals.size() > 1){

            std::sort(intervals.begin(), intervals.end(), [](std::shared_ptr<Interval> & a, std::shared_ptr<Interval> & b){return a->get_total_h() < b->get_total_h();});

        }

    }

}

void add_employee (std::vector<std::shared_ptr<Employee>> &employees){

    bool menu_active = true;

    int id;
    std::string qualification;
    std::string first_name;
    std::string last_name;
    

 while (menu_active){
        std::cout << "### Mitarbeiter Anlegen ###" << std::endl;
        std::cout << "Welche Qualifikation hat der Mitarbeiter? Bitte geben Sie die Zahl der Option." << std::endl;
        std::cout << "1: Auszubildener" << std::endl;
        std::cout << "2: Geselle" << std::endl;
        std::cout << "3: Meister" << std::endl; 
        std::cout << "4: Abbrechen" << std::endl;

        int auswahl;
        std::cin >> auswahl;

        if(auswahl == 1){

            qualification = "Auszubildener";

        }else if(auswahl == 2){

           qualification = "Geselle";
            
        }else if (auswahl == 3){
            
            qualification = "Geselle";

        }else if (auswahl == 4){
            menu_active = false;
            break;
        }
        else{
            std::cout << "Eingabe ungueltig, bitte wiederholen" << std::endl;
            break;
        }

        std::cout << "Wie lautet der Vorname des Mitarbeiters?" << std::endl;
        std::cin >> first_name;

        std::cout << "Wie lautet der Nachname des Mitarbeiters?" << std::endl;
        std::cin >> last_name; 

        std::cout << "Bitte geben Sie die ID des Mitarbeiters ein:" << std::endl;
        std::cin >> id;

        employees.push_back(std::make_shared<Employee>(id, first_name, last_name, qualification));

        if (employees.size() > 1){

            std::sort(employees.begin(), employees.end(), [](std::shared_ptr<Employee> & a, std::shared_ptr<Employee> & b){return a->get_last_name() < b->get_last_name();});

        }


    }

}

void add_company (std::vector<std::shared_ptr<Company>> &companies){
    
    bool menu_active = true;

    int id;
    std::string name;
    
 while (menu_active){
        std::cout << "### Firma Anlegen ###" << std::endl;
        std::cout << "Wie soll die ID der Firma lauten?" << std::endl;
        std::cin >> id;
        std::cout << "Wie der Name der Firma lauten?" << std::endl;
        std::cin >> name;

        companies.push_back(std::make_shared<Company>(id, name));

        if (companies.size() > 1){

            std::sort(companies.begin(), companies.end(), [](std::shared_ptr<Company> & a, std::shared_ptr<Company> & b){return a->get_name() < b->get_name();});

        }

        std::cout << "Moechten Sie eine weitere Firma anlegen? 1 Zum Fortfahren, 0 fuer Abbruch" << std::endl;
        int auswahl;
        std::cin >>auswahl;
        if (auswahl == 0){
            menu_active = false;
        }
    }
}

void add_machine (std::vector<std::shared_ptr<Company>> &companies, std::vector<std::shared_ptr<Stationary_machine>> &stationary_machines, std::vector<std::shared_ptr<Mobile_machine>> &mobile_machines){
    bool menu_active = true;
    while (menu_active){
        std::cout << "Was für einen Typ Maschine moechten Sie anlegen?" << std::endl;
        std::cout << "1 Stationaere Maschine" << std::endl;
        std::cout << "2 Mobile Maschine" << std::endl;
        std::cout << "3 Abbruch" << std::endl;

        int auswahl;
        std::cin >> auswahl;

        int id;
        std::string name;
        std::shared_ptr<Company> company;
        std::string location;
        double weight;

        if (auswahl == 1){
            std::cout << "Bitte geben Sie eine ID für die Maschine ein:" << std::endl;
            std::cin >> id;

            std::cout << "Bitte geben Sie einen Namen für die Maschine ein:" << std::endl;
            std::cin >> name;

            show_companies(companies);

            std::cout << "Bitte geben Sie die Nummer einer Firma an:" << std::endl;
            int nr;
            std::cin >> nr;
            company = companies[nr];

            std::cout << "Bitte geben Sie den Standort der Maschine an:" << std::endl;
            std::cin >> location;

            stationary_machines.push_back(std::make_shared<Stationary_machine>(id, name, company, location));
        
        }else if (auswahl == 2){

            std::cout << "Bitte geben Sie eine ID für die Maschine ein:" << std::endl;
            std::cin >> id;

            std::cout << "Bitte geben Sie einen Namen für die Maschine ein:" << std::endl;
            std::cin >> name;

            show_companies(companies);

            std::cout << "Bitte geben Sie die Nummer einer Firma an:" << std::endl;
            int nr;
            std::cin >> nr;
            company = companies[nr];

            std::cout << "Bitte geben Sie das Gewicht der Maschine an:" << std::endl;
            std::cin >> weight;

            mobile_machines.push_back(std::make_shared<Mobile_machine>(id, name, company, weight));

        }else{
            menu_active = false;
        }
    }
}