#include "Etudiant2.h"
#include <iostream>

using namespace std;

Etudiant2::Etudiant2(string name,string pname,int old ,int nbnote ,Matiere* tabm):Etudiant1(name,pname,old,nbnote){
  tabMatiere = new Matiere[nbnote];
  for(int i=0;i<nbnote;i++)
    tabMatiere[i] = tabm[i];
}

Etudiant2::Etudiant2(const Etudiant2& etud2):Etudiant1(etud2){
  tabMatiere = new Matiere[this->GetNb()];
  for(int i=0;i< this->GetNb() ;i++)
    tabMatiere[i] = etud2.tabMatiere[i];
}

Etudiant2::~Etudiant2(){
  delete [] tabMatiere;
}

void Etudiant2::Affic(){
    float *notes = this->GetNotes();
    cout << nom << " " << prenom << " " << endl;
    for (int i=0;i<this->GetNb();i++)
    {
      cout << tabMatiere[i].GetNom() << " " << notes[i] << endl;
    }
}

float Etudiant2::Moyenne(){
  float moyenne = 0;
  int coefTotal = 0;
  float* note = this->GetNotes();
  for(int i=0;i<this->GetNb();i++)
  {
    moyenne = moyenne + ( note[i] * tabMatiere[i].GetCoef());
    coefTotal = coefTotal + tabMatiere[i].GetCoef();
  }
  return moyenne/coefTotal;
}

Etudiant2& Etudiant2::operator=(const Etudiant2& etud2) {
  if (this != &etud2)
  {
    this->Etudiant1::operator=(etud2);
    delete [] tabMatiere;
    tabMatiere = new Matiere[this->GetNb()];
    for(int i=0;i<this->GetNb();i++)
    {
      tabMatiere[i] = etud2.tabMatiere[i];
    }
  }
  return *this;
}
