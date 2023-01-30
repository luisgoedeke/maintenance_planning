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