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

void edit_employee (std::vector<std::shared_ptr<Interval>> &employees){
}