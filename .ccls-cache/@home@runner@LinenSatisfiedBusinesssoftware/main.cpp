#include <iostream>
using namespace std;

class Pojazd {
public:
  string silnik = "Diesel";
  void uruchom() { cout << "silnik pracuje" << endl; }
};

class Samochod : public virtual Pojazd {
public:
  int liczba_kol = 4;
  int liczba_miejsc = 5;
  void jedz() { cout << "Obiekt jedzie" << endl; }
  void hamuj() { cout << "Obiekt hamuje" << endl; }
};

class Lodz : public virtual Pojazd {
public:
  float wypornosc = 15000.20;
  int liczba_miejsc = 20;
  void plyn() { cout << "Obiekt plynie" << endl; }
  void hamuj() { cout << "Obiekt hamuje" << endl; }
};

class Samolot : public virtual Pojazd {
public:
  int pulap = 5000;
  int liczba_miejsc = 250;
  void lec() { cout << "Obiekt leci" << endl; }
  void hamuj() { cout << "Obiekt hamuje" << endl; }
};

class Amfibia : public Samochod, public Lodz {};

class Hydroplan : public Lodz, public Samolot {};

int main() {
  Amfibia amfibia;
  amfibia.Samochod::uruchom();
  amfibia.jedz();
  amfibia.plyn();
  amfibia.Samochod::hamuj();

  Hydroplan hydroplan;
  hydroplan.Lodz::uruchom();
  hydroplan.plyn();
  hydroplan.lec();
  hydroplan.Lodz::hamuj();
}

#include <iostream>
using namespace std;

class Bazowa {
private:
  char bufor1kB[1024];

public:
  void wyswietl(){};
};

class Posrednia1 : public virtual Bazowa {};
class Posrednia2 : public virtual Bazowa {};
class Koncowa : public Posrednia1, public Posrednia2 {};

int main() {
  Koncowa obiekt;
  cout << sizeof(Koncowa);
  obiekt.Posrednia1::wyswietl();
}

#include <iostream>
using namespace std;

class Bazowa {
public:
  void wyswietl(){};
};

class Posrednia : public Bazowa {};
class Koncowa : public Bazowa, public Posrednia {};

int main() {
  Koncowa obiekt;
  obiekt.Posrednia::wyswietl();
}