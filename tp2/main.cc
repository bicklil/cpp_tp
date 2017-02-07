#include <iostream>
#include "complexe.h"
using namespace std;


int main(int argc, char const *argv[]) {

  Complexe x(1,2);
  Complexe y(3,4);
  Complexe z(y);
  x.Print(); // 1 2
  x.Sum1(y);
  x.Print(); // 4 6
  (x.Sum2(y)).Print(); // 7 10
  x.Print(); // 4 6
  ( (x.Sum2(y)).Sum2(z) ).Print(); // 10 14
  x.Print(); // 4 6
  ( (x.Sum3(y)).Sum3(z) ).Print(); // 10 14
  x.Print(); // 7 10
  ( (x.Sum4(y)).Sum4(z) ).Print(); //13 18
  x.Print(); // 13 18
  return 0;
}
