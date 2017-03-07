#include "Etudiant1.h"
#include "Professeur.h"
#include "Personne.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  Personne perso1("Dorian","Gray",30);
  Etudiant1 etu1("Harry","Potter",15, 4);
  Professeur prof1("Severus","Rogue",50,"titulaire");
  int notes[4] = {12,9,15,14};

  perso1.vieillir();
  perso1.Affic();

  prof1.Travailler(200);
  prof1.Affic();

  etu1.ajouterNotes(notes);
  etu1.Affic();
  cout << etu1.moyenne()<< endl;

  return 0;
}
