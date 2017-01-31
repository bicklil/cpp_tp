#include <iostream>
#include <cmath>
#include "complexe.h"
using namespace std;

void AfficherComplexe(const Complexe& cplx){
  cout << cplx.a << " " << cplx.b << "\n";

}

Complexe Somme(const Complexe& a, const Complexe& b){
  Complexe c;
  c.a = a.a + b.a;
  c.b = a.b + b.b;

  return c;
}

Complexe Produit(const Complexe& a, const Complexe& b){
  Complexe c;
  c.a = (a.a*b.a)-(a.b*b.b);
  c.b = (a.b*b.a)+(a.a*b.b);

  return c;
}

float Module(const Complexe& a){
  return sqrt(a.a*a.a + a.b*a.b);
}

Complexe Conjuge(const Complexe& a){
  Complexe b;
  b.a = a.a;
  b.b = - a.b;
  return b;
}

void Init(Complexe& cpl){
  static unsigned int i = 0;
  cout << &i << "\n";
  cpl.a = 0;
  cpl.b = 0;
  cpl.ident = i++;

}
