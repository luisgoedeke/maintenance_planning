#ifndef MACHINE_H
#define MACHINE_H

#include <string>

class machine
{
private:
    int id;
    std::string name;
    
public:
    machine(){
    }
    ~machine(){
        std::cout<<"Ich wurde zerstoert"<<std::endl;
    }

    void print(){
        std::cout<<"Ich bin eine Maschine"<<std::endl;
    }
};

#endif