#include "Etudiant1.h"
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){

  Etudiant1 etu("jacquie","michel",20, 2),etu1("jacquie","michel",200, 8);
  etu1=etu;
  etu1.Affic();
  int tab[2] = {5,7};
  etu.ajouterNotes(tab);
  etu.Affic();
  cout << etu.moyenne() << endl;
  return 0;
}
