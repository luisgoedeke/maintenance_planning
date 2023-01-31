#include <fstream>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "company.h"
#include "employee.h"
#include "interval.h"
#include "machine.h"
#include "maintenance_plan.h"
#include "write_file.h"

void write_file_interval(std::vector<std::shared_ptr<Interval>> intervals)
{
  std::ofstream Ausgabe;
  Ausgabe.open("Interval.txt");
  if(Ausgabe)
  {
  Ausgabe << "Intervalle:" << std::endl;
  Ausgabe << "Einheit;Anzahl;" << std::endl;
  for (const auto& s : intervals)
  {
      Ausgabe << s->get_unit() << ";" << s->get_number() <<";" << std::endl;
  }
  Ausgabe.close();
  }
}

void write_file_employee(std::vector<std::shared_ptr<Employee>> employees)
{
  std::ofstream Ausgabe;
  Ausgabe.open("Mitarbeiter.txt");
  if(Ausgabe)
  {
    Ausgabe << "Mitarbeiter:" << std::endl;
    Ausgabe << "Nachname;Vorname;Qualifikation;ID;" << std::endl;
    for (const auto& s : employees)
    {
        Ausgabe << s->get_last_name() << ";" <<  s->get_first_name() <<";" << s->get_qualification() << ";" << s->get_id() <<";"<<std::endl;
    }
  Ausgabe.close();
  }
}

void write_file_company(std::vector<std::shared_ptr<Company>> companies)
{
  std::ofstream Ausgabe;
  Ausgabe.open("Firma.txt");
  if(Ausgabe)
  {
    Ausgabe << "Firmen:" << std::endl;
    for (const auto& s : companies)
    {
        Ausgabe << "ID;Firmenname;" << std::endl;
        Ausgabe << s->get_id() << ";" <<  s->get_name() <<";" << std::endl;

        std::vector<std::shared_ptr<Employee>> employees = s->get_employees();
        Ausgabe << "Firmenmitarbeiter:" << std::endl;
        Ausgabe << "Nachname;Vorname;Qualifikation;ID;" << std::endl;
        for (const auto& e : employees)
        {
          Ausgabe << e->get_last_name() << ";" <<  e->get_first_name() <<";" << e->get_qualification() << "; " << e->get_id() <<";"<<std::endl;
        }

        std::vector<std::shared_ptr<Stationary_machine>> stationary_machines = s->get_stationary_machines();
        Ausgabe << "Stationaere Firmenmaschinen:" << std::endl;
        Ausgabe << "ID;Name;Firma;Ort;" << std::endl;
        for (const auto& m : stationary_machines)
        {
            Ausgabe << m->get_id() << ";" <<  m->get_name() <<";" << m->get_company() << ";" << m->get_location() << ";" <<std::endl;
        }

        std::vector<std::shared_ptr<Mobile_machine>> mobile_machines = s->get_mobile_machines();
        Ausgabe << "Mobile Firmenmaschinen:" << std::endl;
        Ausgabe << "ID;Name;Firma;Gewicht;" << std::endl;
        for (const auto& m : mobile_machines)
        {
            Ausgabe << m->get_id() << ";" <<  m->get_name() <<";" << m->get_company() << ";" << m->get_weight() << ";" <<std::endl;
        }
    }
  Ausgabe.close();
  }
}

void write_file_stationary_machine(std::vector<std::shared_ptr<Stationary_machine>> stationary_machines)
{
  std::ofstream Ausgabe;
  Ausgabe.open("Stationaere_Maschine.txt");
  if(Ausgabe)
  {
    Ausgabe << "Maschinen:" << std::endl;
    Ausgabe << "ID;Name;Firma;Ort;" << std::endl;
    for (const auto& s : stationary_machines)
    {
        Ausgabe << s->get_id() << ";" <<  s->get_name() <<";" << s->get_company()->get_id() << ";" << s->get_location() << ";" <<std::endl;
    }
  Ausgabe.close();
  }
}

void write_file_mobile_machine(std::vector<std::shared_ptr<Mobile_machine>> mobile_machines)
{
  std::ofstream Ausgabe;
  Ausgabe.open("Bewegliche_Maschine.txt");
  if(Ausgabe)
  {
    Ausgabe << "Maschinen:" << std::endl;
    Ausgabe << "ID;Name;Firma;Gewicht;" << std::endl;
    for (const auto& s : mobile_machines)
    {
        Ausgabe << s->get_id() << ";" <<  s->get_name() <<";" << s->get_company()->get_id() << ";" << s->get_weight() << ";" <<std::endl;
    }
  Ausgabe.close();
  }
}

void write_file_maintenance_plan(std::vector<std::shared_ptr<Maintenance_plan>> maintenance_plans)
{
  std::ofstream Ausgabe;
  Ausgabe.open("Wartungsplan.txt");
  if(Ausgabe)
  {
    Ausgabe << "Wartungspläne:" << std::endl;
    for (const auto& s : maintenance_plans)
    {
      Ausgabe << "ID;Name;Qualifikation;Qualifikationswert;" << std::endl;
      Ausgabe << s->get_id() << ";" <<  s->get_name() <<";" << s->get_required_qualification() << ";" << s->get_required_qualification_value() << ";" << std::endl;

      Ausgabe << "Maschine:" << std::endl;
      if (s->get_stationary()){
        Ausgabe << "ID;Name;Firma;Ort;" << std::endl;
        Ausgabe << s->get_stationary_machine()->get_id() << ";" <<  s->get_stationary_machine()->get_name() <<";" << s->get_stationary_machine()->get_company() << ";" <<s->get_stationary_machine()->get_location() << ";" <<std::endl;
      }else{
        Ausgabe << "ID;Name;Firma;Gewicht;" << std::endl;
        Ausgabe << s->get_mobile_machine()->get_id() << ";" <<  s->get_mobile_machine()->get_name() <<";" << s->get_mobile_machine()->get_company() << ";" <<s->get_mobile_machine()->get_weight() << ";" <<std::endl;

      }

      Ausgabe << "Intervall:" << std::endl;
      Ausgabe << "Einheit;Anzahl;" << std::endl;
      Ausgabe << s->get_interval()->get_unit() << ";" << s->get_interval()->get_number() <<";" << std::endl;
      Ausgabe << "Mitarbeiter:" << std::endl;
      Ausgabe << "Nachname;Vorname;Qualifikation;ID;" << std::endl;
      Ausgabe << s->get_employee()->get_last_name() << ";" <<  s->get_employee()->get_first_name() <<";" << s->get_employee()->get_qualification() << ";" << s->get_employee()->get_id() <<";"<<std::endl;
    }
  Ausgabe.close();
  }
}
