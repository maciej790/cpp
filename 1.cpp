#include <iostream>
using namespace std;

class Pojazd {
public:
  virtual void zatrzymaj() = 0;
};

class Samochod : public Pojazd {
public:
  void zatrzymaj() { cout << "Zatrzymuje samochod" << endl; }
};

class Motor : public Pojazd {
public:
  void zatrzymaj() { cout << "Zatrzymuje motor" << endl; }
};

class Rower : public Pojazd {
public:
  void zatrzymaj() { cout << "Zatrzymuje rower" << endl; }
};


int main()
{
  
  Pojazd* wsk[3] = {new Samochod, new Motor, new Rower};

  for(int i = 0; i < 3; i++){
   wsk[i]->zatrzymaj();
  }
}
