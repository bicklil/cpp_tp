#include "Personne.h"

int main(int argc, char const *argv[]){

  Personne perso("jacquie","michel",20);
  perso.Affic();
  perso.vieillir();
  perso.Affic();
  return 0;
}
