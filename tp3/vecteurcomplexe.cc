#include <fstream>
#include "vecteurcomplexe.h"
#include "complexe.h"

VecteurComplexe::VecteurComplexe (){
  taille=0;
  vecCpl=0;
}
VecteurComplexe::VecteurComplexe (unsigned short nb,const Complexe* tab){
  taille=nb;
  vecCpl=new Complexe[taille];
  for(int i=0;i<taille;i++)
  {
    vecCpl[i]=tab[i];
  }
}
VecteurComplexe::VecteurComplexe (const VecteurComplexe& vcpl){
  taille=vcpl.taille;
  vecCpl=new Complexe[taille];
  for(int i=0;i<taille;i++)
  {
    vecCpl[i]=vcpl.vecCpl[i];
  }
}
VecteurComplexe::VecteurComplexe (ifstream& fichier){
fichier >> taille ;
vecCpl = new Complexe[taille];
float a,b;
for (int i=0;i<taille;i++)
  {
    fichier >> a  >> b;
    vecCpl[i] = Complexe(a,b);
  }
}

VecteurComplexe::~VecteurComplexe(){
  delete [] vecCpl;
}

void VecteurComplexe::affiche(){
  for(int i=0;i<taille;i++){
    vecCpl[i].Print();
  }
}
