#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "add.h"
#include "company.h"
#include "comparsion.h"
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