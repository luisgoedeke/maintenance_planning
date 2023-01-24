#include <iostream>
#include "interval.h"

Interval::Interval(char a, int b){}
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