#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "add.h"
#include "company.h"
#include "delete.h"
#include "edit.h"
#include "employee.h"
#include "interval.h"
#include "machine.h"
#include "maintenance_plan.h"
#include "menu.h"
#include "show.h"
#include "write_file.h"
#include "read_file.h"

void menu_add (std::vector<std::shared_ptr<Company>> &companies, std::vector<std::shared_ptr<Employee>> &employees, std::vector<std::shared_ptr<Interval>> &intervals, std::vector<std::shared_ptr<Stationary_machine>> stationary_machines, std::vector<std::shared_ptr<Mobile_machine>> mobile_machines, std::vector<std::shared_ptr<Maintenance_plan>> &m_plans){
    bool menu_active = true;
    
    while (menu_active){
        std::cout << "### Anlegen ###" << std::endl;
        std::cout << "Was moechten Sie anlegen? Bitte geben Sie die Zahl des Menuepunktes ein." << std::endl;
        std::cout << "1 Firma" << std::endl;
        std::cout << "2 Mitarbeiter" << std::endl;
        std::cout << "3 Intervall" << std::endl;
        std::cout << "4 Maschine" << std::endl;
        std::cout << "5 Wartungsplan" << std::endl;
        std::cout << "##############################" << std::endl;
        std::cout << "6 Zurueck ins Hauptmenue" << std::endl;

        int auswahl;
        std::cin >> auswahl;

        if(auswahl == 1){

            add_company(companies);

        }else if(auswahl == 2){

            add_employee(employees);
            
        }else if (auswahl == 3){
            
            add_interval(intervals);

        }else if (auswahl == 4){

            add_machine(companies, stationary_machines, mobile_machines);

        }
        else if (auswahl == 5){

            add_maintenance_plan(companies, employees, intervals, stationary_machines, mobile_machines, m_plans);

        }else if (auswahl == 6){
            std::cout << "Zurueck ins Hauptmenue." << std::endl;
            menu_active = false;
        }
        else{
            std::cout << "EIngabe ungueltig, bitte wiederholen" << std::endl;
        }

    }
}

void menu_edit (std::vector<std::shared_ptr<Company>> &companies, std::vector<std::shared_ptr<Employee>> &employees, std::vector<std::shared_ptr<Interval>> &intervals, std::vector<std::shared_ptr<Stationary_machine>> stationary_machines, std::vector<std::shared_ptr<Mobile_machine>> mobile_machines, std::vector<std::shared_ptr<Maintenance_plan>> &m_plans){
    bool menu_active = true;
    
    while (menu_active){
        std::cout << "### Anlegen ###" << std::endl;
        std::cout << "Was moechten Sie bearbeiten? Bitte geben Sie die Zahl des Menuepunktes ein." << std::endl;
        std::cout << "1 Firma" << std::endl;
        std::cout << "2 Mitarbeiter" << std::endl;
        std::cout << "3 Intervall" << std::endl;
        std::cout << "4 Maschine" << std::endl;
        std::cout << "5 Wartungsplan" << std::endl;
        std::cout << "##############################" << std::endl;
        std::cout << "6 Zurueck ins Hauptmenue" << std::endl;

        int auswahl;
        std::cin >> auswahl;

        if(auswahl == 1){
            edit_companies(companies, employees, stationary_machines, mobile_machines);

        }else if(auswahl == 2){
            edit_employees(employees);
            
        }else if (auswahl == 3){
            
            edit_interval(intervals);

        }else if (auswahl == 4){

        }
        else if (auswahl == 5){

        }else if (auswahl == 6){
            std::cout << "Zurueck ins Hauptmenue." << std::endl;
            menu_active = false;
        }
        else{
            std::cout << "Eingabe ungueltig, bitte wiederholen" << std::endl;
        }

    }
}

void menu_delete (std::vector<std::shared_ptr<Company>> &companies, std::vector<std::shared_ptr<Employee>> &employees, std::vector<std::shared_ptr<Interval>> &intervals, std::vector<std::shared_ptr<Stationary_machine>> stationary_machines, std::vector<std::shared_ptr<Mobile_machine>> mobile_machines, std::vector<std::shared_ptr<Maintenance_plan>> &m_plans){
    bool menu_active = true;
    
    while (menu_active){
        std::cout << "### Anlegen ###" << std::endl;
        std::cout << "Was moechten Sie loeschen? Bitte geben Sie die Zahl des Menuepunktes ein." << std::endl;
        std::cout << "1 Firma" << std::endl;
        std::cout << "2 Mitarbeiter" << std::endl;
        std::cout << "3 Intervall" << std::endl;
        std::cout << "4 Maschine" << std::endl;
        std::cout << "5 Wartungsplan" << std::endl;
        std::cout << "##############################" << std::endl;
        std::cout << "6 Zurueck ins Hauptmenue" << std::endl;

        int auswahl;
        std::cin >> auswahl;

        if(auswahl == 1){

            delete_company(companies);

        }else if(auswahl == 2){

            delete_employee(employees, companies);
            
        }else if (auswahl == 3){

            delete_interval(intervals);

        }else if (auswahl == 4){

            delete_machine(stationary_machines, mobile_machines, companies);

        }
        else if (auswahl == 5){

        }else if (auswahl == 6){

            std::cout << "Zurueck ins Hauptmenue." << std::endl;
            menu_active = false;

        }
        else{

            std::cout << "Eingabe ungueltig, bitte wiederholen" << std::endl;

        }

    }
}

void menu_show (std::vector<std::shared_ptr<Company>> &companies, std::vector<std::shared_ptr<Employee>> &employees, std::vector<std::shared_ptr<Interval>> &intervals, std::vector<std::shared_ptr<Stationary_machine>> stationary_machines, std::vector<std::shared_ptr<Mobile_machine>> mobile_machines, std::vector<std::shared_ptr<Maintenance_plan>> &m_plans){
    bool menu_active = true;
    
    while (menu_active){
        std::cout << "### Anlegen ###" << std::endl;
        std::cout << "Was moechten Sie anzeigen? Bitte geben Sie die Zahl des Menuepunktes ein." << std::endl;
        std::cout << "1 Firma" << std::endl;
        std::cout << "2 Mitarbeiter" << std::endl;
        std::cout << "3 Intervall" << std::endl;
        std::cout << "4 Maschine" << std::endl;
        std::cout << "5 Wartungsplan" << std::endl;
        std::cout << "##############################" << std::endl;
        std::cout << "6 Zurueck ins Hauptmenue" << std::endl;

        int auswahl;
        std::cin >> auswahl;

        if(auswahl == 1){

            show_companies(companies);

        }else if(auswahl == 2){

            show_employees(employees);
            
        }else if (auswahl == 3){

            show_intervals(intervals);
            
        }else if (auswahl == 4){

            show_stationary_machines(stationary_machines);
            show_mobile_machines(mobile_machines);

        }
        else if (auswahl == 5){

        }else if (auswahl == 6){

            std::cout << "Zurueck ins Hauptmenue." << std::endl;
            menu_active = false;

        }
        else{

            std::cout << "Eingabe ungueltig, bitte wiederholen" << std::endl;

        }

    }
}

void menu_main(std::vector<std::shared_ptr<Company>> &companies, std::vector<std::shared_ptr<Employee>> &employees, std::vector<std::shared_ptr<Interval>> &intervals, std::vector<std::shared_ptr<Stationary_machine>> stationary_machines, std::vector<std::shared_ptr<Mobile_machine>> mobile_machines, std::vector<std::shared_ptr<Maintenance_plan>> &m_plans){

    bool menu_active = true;

    while (menu_active){

        std::cout << "### Hauptmenue ###" << std::endl;
        std::cout << "Was moechten Sie tun? Bitte geben Sie die Zahl des Menuepunktes ein." << std::endl;
        std::cout << "1 Daten laden" << std::endl;
        std::cout << "2 Daten speichern" << std::endl;
        std::cout << "3 Anlegen" << std::endl;
        std::cout << "4 Bearbeiten" << std::endl;
        std::cout << "5 Loeschen" << std::endl;
        std::cout << "6 Anzeigen" << std::endl;
        std::cout << "7 Programm beenden" << std::endl;

        int auswahl;
        std::cin >> auswahl;

        if(auswahl == 1){

            read_file_interval(intervals);

        }else if(auswahl == 2){

            write_file_interval(intervals);
            
        }else if (auswahl == 3){

            menu_add(companies, employees, intervals, stationary_machines, mobile_machines, m_plans);

        }else if (auswahl == 4){

            menu_edit(companies, employees, intervals, stationary_machines, mobile_machines, m_plans);

        }
        else if (auswahl == 5){

            menu_delete(companies, employees, intervals, stationary_machines, mobile_machines, m_plans);

        }else if (auswahl == 6){

            menu_show(companies, employees, intervals, stationary_machines, mobile_machines, m_plans);

        }else if (auswahl == 7){
            std::cout << "Programm wird beendet." << std::endl;
            menu_active = false;
        }
        else{
            std::cout << "EIngabe ungueltig, bitte wiederholen" << std::endl;
        }

    }

}