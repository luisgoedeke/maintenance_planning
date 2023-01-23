//test 
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <array>

using std::cout; using std::cin;
using std::endl; using std::string;
using std::vector; using std::array;

using namespace std;

class Employee
{
  private:

  int id;
  std::string name;
  std::string qualification;

  public:
  Employee() = default;             //zugefügter Konstruktor
  Employee(int a, std::string b, std::string c)
  {
    this->id = a;
    this->name = b;
    this->qualification = c;
  }

  ~Employee(){}

  int get_id()
  {
    return this->id;
  }
  void set_id(int a)
  {
    this->id = a;
  }
  std::string get_name()
  {
    return this->name;
  }
  void set_name(std::string a)
  {
    this->name = a;
  }
  std::string get_qualification()
  {
    return this->qualification;
  }
  void set_qualification(std::string a)
  {
    this->qualification = a;
  }
};

class Interval
{
  private:
  char unit;
  int number;

  public:
    Interval(char a, int b)
    {
      this->unit = a;
      this->number = b;

    }
    ~Interval(){}
    char get_unit(){
        return this->unit;
    }
    void set_unit(char a){
        this->unit = a;
    }
    int get_number(){
        return this->number;
    }
    void set_number(int a){
        this->number = a;
    }
  };

  class Machine
  {
      protected:
      int id;
      std::string name;

      public:
      Machine(){}
      Machine(int a, std::string b)
      {
        this->id = a;
        this->name = b;
      }
      ~Machine(){}
      void print()
      {
        std::cout<<"Ich bin eine Maschine"<<std::endl;
      }
      void set_id(int a){
          this->id = a;
      }
      int get_id(){
          return this->id;
      }
      void set_name(string a){
          this->name = a;
      }
      string get_name(){
          return this->name;
      }

  };

  class Stationary_machine : Machine
  {
      private:
      std::string location;


  };

  class Mobile_machine : Machine
  {
      private:
      double weight;
  };


int main()
{
//Test-Employee Objekte definieren
//Variante 2
array<Employee,4> arr2 =
{
Employee(1553,"Max","Meister"),
Employee(4126,"Karl","Lehrling"),
Employee(7489,"Otto","Geselle"),
Employee(5121,"Peter","Meister")
};
array<Interval,2> arr3 =
{
Interval(3, 1),
Interval(6, 2),
};

array<Machine,4> arr4 =
{
Machine(123,"M1"),
Machine(636,"M2"),
Machine(264,"M3"),
Machine(674,"M4"),
};


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
