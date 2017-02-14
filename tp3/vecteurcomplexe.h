#ifndef vecteurcomplexe
#define vecteurcomplexe
#include "complexe.h"
#include <fstream>

using namespace std;

class VecteurComplexe {
private:
  int taille;
  Complexe* vecCpl;

public:
  VecteurComplexe ();
  VecteurComplexe (unsigned short ,const Complexe*);
  VecteurComplexe (const VecteurComplexe&);
  VecteurComplexe (ifstream&);
  ~VecteurComplexe ();
  void affiche();
};
#endif
