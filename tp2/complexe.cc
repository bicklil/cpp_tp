#include <iostream>
#include <cmath>
#include "complexe.h"
using namespace std;


void AfficherComplexe(const Complexe& cplx){
  cout << "re:"<<cplx.a << " im:" << cplx.b << "\n";

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
  cout << "adresse de i: " << &i << "\n";
  cpl.a = 0;
  cpl.b = 0;
  cpl.ident = i++;

}


void CreerComplexe(Complexe** pcomplexe){
  *pcomplexe = new Complexe;
  Init(**pcomplexe);
}

void CreerComplexe(ptComplexe& pcomplexe){
  pcomplexe = new Complexe;
  Init(*pcomplexe);
}

Complexe* CreerComplexe(){
  ptComplexe pcom;
  pcom = new Complexe;
  Init(*pcom);
  return pcom;
}


Complexe* CreerVecteurComplexes(unsigned int a){
  ptComplexe ptcom;
  ptcom = new Complexe[a];
  int i= 0;
  for (i=0;i<a;i++){
    Init(ptcom[i]);
    cout << "adresse du " << i << "eme cplx : "<< &ptcom[i] << '\n';
  }
return ptcom;
}
