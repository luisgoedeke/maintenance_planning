#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <array>

using std::cout; using std::cin;
using std::endl; using std::string;
using std::vector; using std::array;

using namespace std;

void write_file(array<Employee> &arr2, array<Interval> &arr3, array<Machine> &arr4)
{
//Daten in Textdatei ausgeben
ofstream Ausgabe;
Ausgabe.open("Daten.txt");
if(Ausgabe)
{
Ausgabe << "Daten der aktuellen Mitarbeiter:" << endl;
for (auto &item : arr2)
{
  int id = 0;
  id = item.get_id();
  Ausgabe << "Id:" << id << "; ";
  string name = "";
  name = item.get_name();
  Ausgabe << "Name:" << name << "; ";
  string qualification = "";
  qualification = item.get_qualification();
  Ausgabe << "Qualifikation:" << qualification << "; " << endl;
}

Ausgabe << endl << "Daten der aktuellen Intervalle:" << endl;
for (auto &item : arr3)
{
  char unit = 0;
  unit = item.get_unit();
  Ausgabe << "Unit:" << unit << "; ";
  int number = 0;
  number = item.get_number();
  Ausgabe << "Number:" << number << "; " << endl;
}

Ausgabe << endl << "Daten der aktuellen Maschinen:" << endl;
for (auto &item : arr4)
{
  int id = 0;
  id = item.get_id();
  Ausgabe << "Id:" << id << "; ";
  string name = "";
  name = item.get_name();
  Ausgabe << "Name:" << name << "; " << endl;
}
Ausgabe.close();
}
}
