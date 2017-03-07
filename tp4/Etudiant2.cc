#include "Etudiant2.h"
#include <iostream>

using namespace std;

Etudiant2::Etudiant2(string name,string pname,int old ,int nbnote ,Matiere* tabm):Etudiant1(name,pname,old,nbnote){
  tabMatiere = new Matiere[nbnote];
  for(int i=0;i<nbnote;i++)
    tabMatiere[i] = tabm[i];
}

Etudiant2::Etudiant2(const Etudiant2& etud2):Etudiant1(etud2){
  tabMatiere = new Matiere[etud2.nb];
  for(int i=0;i<etud2.nb;i++)
    tabMatiere[i] = etud2.tabMatiere[i];
}

Etudiant2::~Etudiant2(){
  delete [] tabMatiere;
}

void Etudiant2::Affic(){
    Etudiant1::Affic();
}

//int Etudiant2::Moyenne();
//Etudiant2& operator=(const Etudiant2&);
