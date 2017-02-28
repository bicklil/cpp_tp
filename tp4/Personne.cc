#include "Personne.h"
#include <string>
#include <iostream>

using namespace std;

Personne::Personne(string name,string fname,int old){
  nom = name;
  prenom = fname;
  age = old;
}

void Personne::Affic(){
  cout << nom << " " << prenom << " " << age << endl;

}
void Personne::vieillir(){
  age++;
}
