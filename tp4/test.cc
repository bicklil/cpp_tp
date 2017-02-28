#include "Professeur.h"

int main(int argc, char const *argv[]){

  Professeur prof("jacquie","michel",20,"titulaire");
  prof.Affic();
  prof.Travailler(5);
  prof.Affic();
  return 0;
}
