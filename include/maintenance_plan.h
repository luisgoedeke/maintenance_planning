#ifndef MAINTENANCE_PLAN_H
#define MAINTENANCE_PLAN_H

#include <std::string>

#include "machine.h"
#include "interval.h"

class Maintenance_plan{

    private:

    int id;
    std::string name;
    Machine* machine;
    Interval* interval;
    std::string required_qualification;


    public:

};

#endif