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

write_file_interval(std::vector<std::shared_ptr<Interval>> intervals)
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

write_file_employee(std::vector<std::shared_ptr<Employee>> employees)
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

write_file_company(std::vector<std::shared_ptr<Company>> companies)
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

        std::vector<std::shared_ptr<Machine>> machines = s->get_machines();
        Ausgabe << "Firmenmaschinen:" << std::endl;
        Ausgabe << "ID;Name;Firma;" << std::endl;
        for (const auto& m : machines)
        {
            Ausgabe << m->get_id() << ";" <<  m->get_name() <<";" << m->get_company() << ";" <<std::endl;
        }
    }
  Ausgabe.close();
  }
}

write_file_machine(std::vector<std::shared_ptr<Machine>> machines)
{
  std::ofstream Ausgabe;
  Ausgabe.open("Maschine.txt");
  if(Ausgabe)
  {
    Ausgabe << "Maschinen:" << std::endl;
    Ausgabe << "ID;Name;Firma;" << std::endl;
    for (const auto& s : machines)
    {
        Ausgabe << s->get_id() << ";" <<  s->get_name() <<";" << s->get_company() << ";" <<std::endl;
    }
  Ausgabe.close();
  }
}

write_file_maintenance_plan(std::vector<std::shared_ptr<Maintenance_plan>> maintenance_plans)
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
      Ausgabe << "ID;Name;Firma;" << std::endl;
      Ausgabe << s->getmachine()->get_id() << ";" <<  s->getmachine()->get_name() <<";" << s->getmachine()->get_company() << ";" <<std::endl;
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
