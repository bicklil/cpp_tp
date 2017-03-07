#include "Etudiant1.h"
#include "Professeur.h"
#include "Personne.h"
#include "Matiere.h"
#include "Etudiant2.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  Matiere* tabmat = new Matiere[4];
  tabmat[0] = Matiere("Magie",3);
  tabmat[1] = Matiere("Potion",2);
  tabmat[2] = Matiere("Divination",4);
  tabmat[3] =  Matiere("Info",1);
  Etudiant2 etu("Harry","Potter",15, 4, tabmat);

  float notes[4] = {12,9,15,14};
  etu.ajouterNotes(notes);
  etu.Affic();
  cout << etu.Moyenne() <<endl;


  return 0;
}
