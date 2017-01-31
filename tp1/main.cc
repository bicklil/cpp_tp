#include <iostream>
#include "echangiste.h"
#include "complexe.h"
using namespace std;


int main(int argc, char const *argv[]) {
  int x = 8, y = 20;
  cout << x << " " << y << "\n";
  Permuter(x,y);
  cout << x << " " << y << "\n";
  Complexe cpl1, cpl2;
  cpl1.a = 20;
  cpl1.b = 120;
  cpl2.a = 2;
  cpl2.b = 45;
  Permuter(cpl1,cpl2);
  AfficherComplexe(cpl1);
  AfficherComplexe(cpl2);
  return 0;
}
