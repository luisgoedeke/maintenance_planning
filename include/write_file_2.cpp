#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <array>

void write_file(std::vector<Maintenance_plan*> plan)
{
//Daten in Textdatei ausgeben
std::ofstream Ausgabe;
Ausgabe.open("Daten.txt");
if(Ausgabe)
{
Ausgabe << "Daten der aktuellen Wartungspläne:" << std::endl << std::endl << std::endl;
  for (auto i = plan.begin(); i != plan.end(); i++)
  {
    //Informationen über den Wartungsplan
    Ausgabe << "Informationen zu dem Wartungsplan:" << std::endl;
    int id1 = 0;
    id1 = plan[i]->get_id();
    Ausgabe << "\t Wartungsplan-ID: " << id1 << "; " << std::endl;


    //Informationen über die Maschine
    //Hier muss noch Unterscheidung zwischen stationär und mobil eingeführt werden
    Ausgabe << "Informationen zu der Maschine:" << std::endl;
    int id2 = 0;
    id2 = plan[i]->get_machine()->get_id();
    Ausgabe << "\t Maschinen-ID: "<< id2 << "; ";
    std::string name1 = "";
    name1 = plan[i]->get_machine()->get_name();
    Ausgabe << "Maschinenname: " << name1 << "; " << std::endl;

    //hier wird die ID, der Name, die Mitarbeiter und die Maschinen der Firma ausgegeben in welcher die Maschine steht
    Ausgabe << "Informationen zu der Firma:" << std::endl;
    //Firmen-ID ausgeben
    int id3 = 0;
    id3 = plan[i]->get_machine()->get_company()->get_ID();
    Ausgabe << "\t Firmen-ID: " << id3 << "; ";
    //Firmenname ausgeben
    std::string companyname = "";
    //get_name() muss noch in der Klasse company definiert werden
    companyname = plan[i]->get_machine()->get_company()->get_name();
    Ausgabe << "Firmenname: " << companyname <<"; " << std::endl;
    //Mitarbeiter der Firma ausgeben
    std::vector<Employee*> employees;
    employees = plan[i]->get_machine()->get_company()->get_employees();
    Ausgabe << "\t Mitarbeiter der Firma: " << std::endl;
    for (auto e = employees.begin(); e != employees.end(); e++)
    {
      int id = 0;
      id = employees[e]->get_id();
      Ausgabe << "\t \t Mitarbeiter-ID: " << id << "; ";
      std::string fname = "";
      fname = employees[e]->get_first_name();
      Ausgabe << "Vorname: " << fname << "; ";
      std::string lname = "";
      lname = employees[e]->get_last_name();
      Ausgabe << "Nachname: " << lname << "; ";
      std::string quali = "";
      quali = employees[e]->get_qualification();
      Ausgabe << "Qualifikation: " << quali << "; ";
      int value = 0;
      value = employees[e]->get_qualification_value();
      Ausgabe << "Qualifikationswert: " << value << "; " << std::endl;
    }
    std::vector<Machine*> machines;
    machines = plan[i]->get_machine()->get_company()->get_machines();
    Ausgabe << "\t Maschinen der Firma: " << std::endl;
    for (auto m = machines.begin(); m != machines.end(); m++)
    {
      int id = 0;
      id = machines[m]->get_id();
      Ausgabe << "\t \t Maschinen-ID: "<< id << "; ";
      std::string name = "";
      name = machines[m]->get_name();
      Ausgabe << "Maschinenname: " << name << "; " << std::endl;
    }


    //Informationen über das Intervall
    Ausgabe << "Informationen zu dem Intervall:" << std::endl;
    char unit = "";
    unit = plan[i]->get_interval()->get_unit();
    Ausgabe << "\t Intervall-Unit: " << unit << "; ";
    int number = 0;
    number = plan[i]->get_interval()->get_number();
    Ausgabe << "Intervall-Nummer: " << number << "; " << std::endl;


    //Informationen über die Qualifikation
    Ausgabe << "Informationen zu der benötigten Qualifikation:" << std::endl;
    std::string quali = "";
    quali1 = plan[i]->get_required_qualification();
    Ausgabe << "\t Qualifikation: " << quali1 << "; ";
    int value = 0;
    value1 = plan[i]->get_required_qualification_value();
    Ausgabe << "Qualifikationswert: " << value1 << "; " << std::endl;


    //Informationen über den Mitarbeiter
    Ausgabe << "Informationen zu dem verantwortlichen Mitarbeiter:" << std::endl;
    int id4 = 0;
    id4 = plan[i]->get_employee()->get_id();
    Ausgabe << "\t Mitarbeiter-ID: " << id4 << "; ";
    std::string fname = "";
    fname = plan[i]->get_employee()->get_first_name();
    Ausgabe << "Vorname: " << fname << "; ";
    std::string lname = "";
    lname = plan[i]->get_employee()->get_last_name();
    Ausgabe << "Nachname: " << lname << "; ";
    std::string quali2 = "";
    quali2 = plan[i]->get_employee()->get_qualification();
    Ausgabe << "Qualifikation: " << quali2 << "; ";
    int value2 = 0;
    value2 = plan[i]->get_employee()->get_qualification_value();
    Ausgabe << "Qualifikationswert: " << value2 << "; " << std::endl;

    //Trennlinie
    Ausgabe<<std::endl<<std::endl<<"------------------------------------"<<std::endl<<std::endl;
  }
}
}
