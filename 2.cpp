#include <iostream>
#include <cmath>
using namespace std;

class Ksztalt {
public:
  virtual float oblicz_pole() = 0;
  virtual float oblicz_obwod() = 0;
};

class Kolo : public Ksztalt {
  float r;

public:
  Kolo(float promien = 1) { r = promien; }
  virtual float oblicz_pole() { return 3.14 * r * r; }

  virtual float oblicz_obwod() { return 3.14 * 2 * r; }
};

class Kwadrat : public Ksztalt {
  float a;

public:
  Kwadrat(float bok = 2) { a = bok; }
  virtual float oblicz_pole() { return a * a; }
  virtual float oblicz_obwod() { return 4 * a; }

  friend void dlugoscPrzekatnej(Kwadrat &bok);
};

void dlugoscPrzekatnej(Kwadrat &bok){
  cout << "Bok: " << bok.a * sqrt(2) <<endl;
}

class Trojkat : public Ksztalt {
  float a, b, c, h;

public:
  Trojkat(float bok_a = 1, float bok_b = 2, float bok_c = 3,
          float wysokosc = 4) {
    a = bok_a, b = bok_b, c = bok_c, h = wysokosc;
  }
  virtual float oblicz_pole() { return (a * h) / 2; }

  virtual float oblicz_obwod() { return a + b + c; }
};

void obliczenia(Ksztalt *x) {
  cout << x->oblicz_pole() << endl;
  cout << x->oblicz_obwod() << endl;
}

int main() {
  float promien, bok, bok_a, bok_b, bok_c, wysokosc;
  cin >> promien;
  cin >> bok;
  cin >> bok_a;
  cin >> bok_b;
  cin >> bok_c;
  cin >> wysokosc;
  cout << "///////////////////" << endl;

  Kolo kolo(promien);
  Kwadrat kwadrat(bok);
  Trojkat trojkat(bok_a, bok_b, bok_c, wysokosc);
  Ksztalt *wsk;

  wsk = &kolo;
  obliczenia(wsk);
  wsk = &kwadrat;
  obliczenia(wsk);
  wsk = &trojkat;
  obliczenia(wsk);
  
  dlugoscPrzekatnej(kwadrat);
  
}
