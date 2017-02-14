#include <iostream>
#include <fstream>
#include "vecteurcomplexe.h"
using namespace std;


int main(int argc, char const *argv[]) {
  ifstream fichier("txt.txt");

  VecteurComplexe test(fichier);
  test.affiche();
  return 0;
}
