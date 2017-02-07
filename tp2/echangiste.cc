#include "complexe.h"

void Permuter(int& a, int& b)
{
  int t = a;
  a = b;
  b = t;
}

void Permuter(Complexe& a, Complexe& b){
  Complexe t = a;
  a = b;
  b = t;
}
