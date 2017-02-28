#include "Professeur.h"
#include "Personne.h"
#include <iostream>

using namespace std;

Professeur::Professeur(string name,string fname,int old,string stat):Personne(name,fname,old)
{
  status = stat;
  heures = 0;
}

void Professeur::Affic(){
  Personne::Affic();
  cout  << status << " " << heures << endl;
}

void Professeur::Travailler(int h){
  heures = heures+h;
}
