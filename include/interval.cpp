#include <iostream>

#include "interval.h"

Interval::Interval(char a, int b){
    this->unit = a;
    this->number = b;
}
Interval::~Interval(){}

char Interval::get_unit(){
    return this->unit;
}
void Interval::set_unit(char a){
    this->unit = a;
}

int Interval::get_number(){
    return this->number;
}
void Interval::set_number(int a){
    this->number = a;
}

int Interval::get_total_h(){
    if (this->unit == 'h'){

        return this->number;
    }else if (this-> unit == 'd'){

        return this->number*24;

    }else if (this-> unit == 'w'){

        return this->number*24*7;

    }else if (this-> unit == 'm'){

        return this->number*24*30;
    }else{
        return 0;
    }

}