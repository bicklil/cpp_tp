#include <iostream>
#include "echangiste.h"
#include "complexe.h"
using namespace std;


int main(int argc, char const *argv[]) {
  Complexe* pcpl ;
  CreerComplexe(&pcpl);
  AfficherComplexe(*pcpl);
  delete(pcpl);

  /*CreerComplexe(pcpl);
  cout << pcpl << "\n";
  AfficherComplexe(**pcpl);
  ptComplexe pcom= CreerComplexe();
  cout << pcom<< "\n";
  delete(pcom);
  delete(pcpl);
  CreerVecteurComplexes(5);*/
  /*int x = 8, y = 20;
  cout << x << " " << y << "\n";
  Permuter(x,y);
  cout << x << " " << y << "\n";
  Complexe cpl1,cpl2;
  Init(cpl1);
  Init(cpl2);
  cpl1.a = 5;
  cpl1.b = 12;
  cout << cpl1.ident << "\n";
  cout << cpl2.ident << "\n";*/
  /*cpl2.a = 8;
  cpl2.b = 15;
  Permuter(cpl1,cpl2);
  AfficherComplexe(cpl1);
  AfficherComplexe(cpl2);

  AfficherComplexe(Somme(cpl1,cpl2));

  AfficherComplexe(Produit(cpl1,cpl2));

  cout << Module(cpl1) << "\n";

  AfficherComplexe(Conjuge(cpl1));

  Complexe z= Produit(cpl1,Conjuge(cpl1));
  AfficherComplexe(z);
  // |z|²
  cout << Module(Produit(cpl1,cpl1)) << "\n"; */


  return 0;
}
