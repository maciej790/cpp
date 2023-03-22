////////////////////////////////////////// ZADANIE 1, 2 ///////////////////////////////////
///////////////////////////////////////// NAZWA: [byleco].cpp ////////////////////////////////////

#include <iostream>
using namespace std;

class Osoba {
protected:
  string imie;
  int wiek;

public:
  void ustawWszystko(string imie, int wiek) {
    this->imie = imie;
    this->wiek = wiek;
  }
  void wypiszWszystko();
  string wypiszImie();
  void ustawImie(string imie);
  void ustawWiek(int wiek);
  int wypiszWiek();
};

class Kobieta : public Osoba {
public:
  string wypiszImie();
};

class Mezczyzna : public Kobieta {};

void Osoba::wypiszWszystko() {
  cout << "Imie: " << imie << endl << "Wiek: " << wiek << endl;
}

string Kobieta::wypiszImie() { return this->imie; }
string Osoba::wypiszImie() { return this->imie; }
void Osoba::ustawImie(string imie) { this->imie = imie; }
void Osoba::ustawWiek(int wiek) { this->wiek = wiek; }
int Osoba::wypiszWiek() { return this->wiek; }

int main() {
  string imie;
  int wiek;
  Osoba Karol;
  cin >> imie;
  cin >> wiek;
  Karol.ustawWszystko(imie, wiek);
  Karol.wypiszWszystko();
  Kobieta Alicja;
  cin >> imie;
  cin >> wiek;
  Alicja.ustawWszystko(imie, wiek);
  Alicja.wypiszWszystko();
  cout << Alicja.wypiszImie() << endl;
  Mezczyzna mezczyzna;
  cin >> imie;
  cin >> wiek;
  mezczyzna.ustawWszystko(imie, wiek);
  mezczyzna.wypiszWszystko();
  cout << mezczyzna.wypiszImie() << endl;
  return 0;
}

////////////////////////////////////////// ZADANIE 1, 2 ///////////////////////////////////
///////////////////////////////////////// NAZWA: [byleco].cpp ////////////////////////////////////
