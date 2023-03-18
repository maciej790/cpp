#include <iostream>
using namespace std;

class Punkt2D {
public:
  string nazwa;
  int x;
  int y;

  void ustawWspolrzedne(int x, int y) {
    this->x = x;
    this->y = y;
  }

  void ustawNazwe(string nazwa);
  string zwrocNazwe();
};

class Kolo : public Punkt2D {
public:
  float promien;

  void ustawPromien(float promien) { this->promien = promien; }

  void ustawNazwe(string nazwa);
  string zwrocNazwe();
  float zwrocPromien() { return this->promien; }
  float zwrocObwod() { return 2 * this->promien; }
  float zwrocPole() { return this->promien * this->promien; }
};

class Punkt3D : public Kolo {
public:
  int z;

  void ustawZ(int z) { this->z = z; }

  void ustawNazwe(string nazwa);
  string zwrocNazwe();
};

class Kula : public Punkt3D {
public:
  void ustawNazwe(string nazwa);
  string zwrocNazwe();

  float zwrocPoleKuli() { return 4 * (this->promien * this->promien); }
  float zwrocObjetoscKuli() {
    return (4 / 3) * (this->promien * this->promien * this->promien);
  }

  void zwrocWspolrzedne() {
    cout << this->x << endl;
    cout << this->y << endl;
    cout << this->z << endl;
  }
};

void Punkt2D::ustawNazwe(string nazwa) { this->nazwa = nazwa; };
string Punkt2D::zwrocNazwe() { return this->nazwa; }

void Punkt3D::ustawNazwe(string nazwa) { this->nazwa = nazwa; };
string Punkt3D::zwrocNazwe() { return this->nazwa; }

void Kolo::ustawNazwe(string nazwa) { this->nazwa = nazwa; };
string Kolo::zwrocNazwe() { return this->nazwa; }

void Kula::ustawNazwe(string nazwa) { this->nazwa = nazwa; };
string Kula::zwrocNazwe() { return this->nazwa; }

int main() {
  Punkt2D punkt2D;
  punkt2D.ustawWspolrzedne(1, 2);
  punkt2D.ustawNazwe("punkt_2D");
  cout << punkt2D.zwrocNazwe() << endl;

  Punkt3D punkt3D;
  punkt3D.ustawZ(3);
  punkt3D.ustawNazwe("punkt_3D");
  cout << punkt3D.zwrocNazwe() << endl;

  Kolo kolo;
  kolo.ustawPromien(5);
  kolo.ustawNazwe("kolo");
  cout << kolo.zwrocNazwe() << endl;
  cout << kolo.zwrocPromien() << endl;
  cout << kolo.zwrocObwod() << " PI" << endl;
  cout << kolo.zwrocPole() << " PI" << endl;

  Kula kula;
  kula.ustawNazwe("kula");
  kula.ustawWspolrzedne(6, 7);
  kula.ustawZ(8);
  kula.ustawPromien(9);
  cout << kula.zwrocNazwe() << endl;
  cout << kula.zwrocPromien() << endl;
  cout << kula.zwrocPoleKuli() << " PI" << endl;
  cout << kula.zwrocObjetoscKuli() << " PI" << endl;
  kula.zwrocWspolrzedne();
}