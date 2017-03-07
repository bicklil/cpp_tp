#include "Etudiant1.h"
#include <string>
#include <iostream>
using namespace std;

Etudiant1::Etudiant1(string name,string fname ,int old ,int nbn):Personne(name,fname,old)
{
  nb = nbn;
  notes = new float[nb];
}

Etudiant1::Etudiant1(const Etudiant1& etu):Personne(etu){
  nb = etu.nb;
  notes = new float[nb];
  for(int i;i<nb;i++)
    notes[i]=etu.notes[i];
}

Etudiant1::~Etudiant1(){
  delete [] notes;
}

void Etudiant1::Affic(){
  cout << nom << " "<< prenom;
  for(int i=0;i<nb;i++)
  {
    cout << " " << notes[i];
  }
  cout << endl;
}

void Etudiant1::ajouterNotes(float* tab){
  for(int i=0;i<nb;i++)
    notes[i] = tab[i];
}

float Etudiant1::Moyenne(){
  float moy = 0;
  for(int i=0;i<nb;i++)
    moy = moy + notes[i];
  return moy /nb;
}

Etudiant1& Etudiant1::operator=(const Etudiant1& etu){
  if (this != &etu)
  {
    this->Personne::operator=(etu);
    delete [] notes;
    nb = etu.nb;
    notes = new float[nb];
    for(int i;i<nb;i++)
      notes[i]=etu.notes[i];
  }
  return *this;

}

int Etudiant1::GetNb()const{
  return nb;
}

float* Etudiant1::GetNotes()const{
  return notes;
}
