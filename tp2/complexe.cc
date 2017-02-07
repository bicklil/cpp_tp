#include <iostream>
//#include <cmath>
#include "complexe.h"
using namespace std;

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
  cerr << "complexe detruit" << endl;
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
