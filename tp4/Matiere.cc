#include "Matiere.h"
#include <iostream>

using namespace std;

Matiere::Matiere(){
  nom = "inconnu";
  coef = 0;
}

Matiere::Matiere(string name,int number){
  nom = name;
  coef = number;
}

void Matiere::Affic(){
  cout << nom << " " << coef << endl;
}

Matiere& Matiere::operator=(const Matiere& mat){
  nom = mat.nom;
  coef = mat.coef;
  return *this;
}

string Matiere::GetNom(){
  return nom;
}

int Matiere::GetCoef(){
  return coef;
}
