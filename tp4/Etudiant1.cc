#include "Etudiant1.h"
#include <string>
#include <iostream>
using namespace std;

Etudiant1::Etudiant1(string name,string fname ,int old ,int nbn):Personne(name,fname,old)
{
  nb = nbn;
  notes = new int[nb];
}

Etudiant1::Etudiant1(const Etudiant1& etu):Personne(etu){
  nb = etu.nb;
  notes = new int[nb];
  for(int i;i<nb;i++)
    notes[i]=etu.notes[i];
}

Etudiant1::~Etudiant1(){
  delete [] notes;
}

void Etudiant1::Affic(){
  Personne::Affic();
  cout << nb << endl;
}

void Etudiant1::ajouterNotes(int* tab){
  for(int i=0;i<nb;i++)
    notes[i] = tab[i];
}

float Etudiant1::moyenne(){
  float moy = 0;
  for(int i=0;i<nb;i++)
    moy = moy + notes[i];
  return moy /nb;
}
