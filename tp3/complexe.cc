#include <iostream>
#include "complexe.h"
using namespace std;

Complexe a;
Complexe::Complexe(){
  re = 0;
  im = 0;

}


Complexe::Complexe(float a,float b){
  re = a;
  im = b;

}


Complexe::Complexe(const Complexe& cplx){
  re = cplx.re;
  im = cplx.im;

}


Complexe::~Complexe(){

}


float Complexe::getRe(){
  return re;
}


float Complexe::getIm(){
  return im;
}


void Complexe::modRe(float a){
  re = a;
}


void Complexe::modIm(float a){
  im = a;
}


void Complexe::Print(){
  cout << "re : " << re << " im : "<< im << endl;
}

//duree de vie : temps d'appel de la fonction si pas sauvegardé dans une variable
// utile pour un print tempo, debug,
Complexe Complexe::Sum(const Complexe& cplx){
  return Complexe(re+cplx.re, im+cplx.im);
}


void Complexe::Sum1(const Complexe& cplx){
  re = re + cplx.re;
  im = im + cplx.im;
}

// meilleur somme modifie pas le courant
Complexe Complexe::Sum2(const Complexe& cplx){
  return Complexe(re+cplx.re, im+cplx.im);
}


Complexe Complexe::Sum3(const Complexe& cplx){
  re = re + cplx.re;
  im = im + cplx.im;
  return *this;
}


Complexe& Complexe::Sum4(const Complexe& cplx){
  re = re + cplx.re;
  im = im + cplx.im;
  return *this;
}


bool Complexe::Identical(const Complexe& cplx){
  if (re == cplx.re){
    if (im == cplx.im)
      return true;
    }
  return false;
}

Complexe& Complexe::operator=(const Complexe& cpl){
im=cpl.im;
re= cpl.re;
return *this;
}

Complexe Complexe::operator+(const Complexe& cpl){
  Complexe res;
  res.re = cpl.re + re;
  res.im = cpl.im + im;
  return res;
}

Complexe Complexe::operator-(const Complexe& cpl){
  Complexe res;
  res.re = cpl.re - re;
  res.im = cpl.im - im;
  return res;
}

Complexe Complexe::operator*(const Complexe& cpl){
  Complexe c;
  c.re = (re*cpl.re)-(im*cpl.im);
  c.im = (re*cpl.im)+(im*cpl.re);

  return c;
}
