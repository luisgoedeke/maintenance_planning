#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "company.h"
#include "edit.h"
#include "employee.h"
#include "interval.h"
#include "machine.h"
#include "maintenance_plan.h"

void edit_interval (std::vector<std::shared_ptr<Interval>> &intervals){

    int position;
    int auswahl;
    bool stop_edit;

    char unit;
    int number;

    while(!stop_edit){
        show_intervals(intervals);
        std::cout << "Bitte geben Sie die Nummer des Intervalls ein, dass bearbeitet werden soll:" << std::endl;

        std::cin >> position;

        std::cout << "Was moechten Sie bearbeiten?" <<std::endl;
        std::cout << "1 Einheit" << std::endl;
        std::cout << "2 Laenge" << std::endl;
        std::cout << "3 Abbruch" << std::endl;

        std::cin >> auswahl;

        if (auswahl == 1){
            std::cout << "Was soll die neue Einheit sein?" << std::endl;
            std::cout << "1: Stunden" << std::endl;
            std::cout << "2: Tage" << std::endl;
            std::cout << "3: Wochen" << std::endl;
            std::cout << "4: Monate" << std::endl;
            std::cout << "5: Abbruch" << std::endl;

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

            }
            else{
                std::cout << "Eingabe ungueltig, bitte wiederholen" << std::endl;
            }
            intervals[position]->set_unit(unit);


        }else if(auswahl == 2){
            std::cout << "Auf welche Dauer soll das Intervall geaendert werden?" << std::endl;
            std::cin >> number;
            intervals[position]->set_number(number);

        }else if (auswahl == 3){
            stop_edit = true;

        }
    }

}

void edit_employees (std::vector<std::shared_ptr<Employee>> &employees){

    int position;
    int auswahl;
    bool stop_edit = false;

    int id;
    std::string first_name;
    std::string last_name;
    std::string qualification;

    while(!stop_edit){
        show_employees(employees);
        std::cout << "Bitte geben Sie die Nummer des Mitarbeiters ein, der bearbeitet werden soll:" << std::endl;

        std::cin >> position;

        std::cout << "Was moechten Sie bearbeiten?" <<std::endl;
        std::cout << "1 ID" << std::endl;
        std::cout << "2 Vorname" << std::endl;
        std::cout << "3 Nachname" << std::endl;
        std::cout << "4 Qualifikation" << std::endl;
        std::cout << "5 Abbruch" << std::endl;

        std::cin >> auswahl;

        if (auswahl == 1){
            std::cout << "Bitte geben Sie eine neue ID ein:" << std::endl;
            std::cin >> id;
            employees[position]->set_id(id);


        }else if(auswahl == 2){
            std::cout << "Was soll der neue Vorname lauten?" << std::endl;

            std::cin >> first_name;

            employees[position]->set_first_name(first_name);

        }else if (auswahl == 3){
            std::cout << "Was soll der neue Nachname lauten?" << std::endl;

            std::cin >> last_name;

            employees[position]->set_last_name(last_name);
            
        }else if(auswahl == 4){
            std::cout << "Was soll die neue Qualifikation sein?" << std::endl;
            std::cout << "Welche Qualifikation hat der Mitarbeiter? Bitte geben Sie die Zahl der Option ein." << std::endl;
            std::cout << "1: Auszubildener" << std::endl;
            std::cout << "2: Geselle" << std::endl;
            std::cout << "3: Meister" << std::endl;
            std::cout << "4: Abbrechen" << std::endl;

            std::cin >> auswahl;

            if(auswahl == 1){

                qualification = "Auszubildener";
                employees[position]->set_qualification(qualification);

            }else if(auswahl == 2){

                qualification = "Geselle";
                employees[position]->set_qualification(qualification);
                
            }else if (auswahl == 3){
                
                qualification = "Meister";
                employees[position]->set_qualification(qualification);

            }else if (auswahl == 4){
                stop_edit = true;
                break;
            }else{
                std::cout << "Eingabe ungültig" << std::endl;
            }    
        }else if (auswahl == 5){
            stop_edit = true;
            break;
        }
    }
}