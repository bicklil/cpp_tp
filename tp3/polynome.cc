#include <iostream>
#include "polynome.h"

Polynome::Polynome(){
  deg = 0;
  coeff = 0;
}

Polynome::Polynome(int nb, int* tab){
  deg = nb;
  coeff = new float[deg+1];
  for(int i=0;i<=deg;i++)
  {
    coeff[i]=tab[i];
  }
}

Polynome::Polynome(const Polynome& pl){
  deg = pl.deg;
  coeff = new float[deg+1];
  for(int i=0;i<=deg;i++)
  {
    coeff[i]=pl.coeff[i];
  }
}

Polynome::~Polynome(){
  delete [] coeff;
}

Polynome& Polynome::operator=(const Polynome& pl){
  deg = pl.deg;
  coeff = new float[deg+1];
  for(int i=0;i<=deg;i++)
  {
      coeff[i]=pl.coeff[i];
  }
  return *this;
}
