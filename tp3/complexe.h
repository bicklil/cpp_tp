#ifndef complexe
#define  complexe

#include <iostream>
using namespace std;

class Complexe{
private:
  float re;
  float im;
public:
  Complexe();
  Complexe(float,float);
  Complexe(const Complexe&);
  ~Complexe();
  float getRe();
  float getIm();
  void modRe(float);
  void modIm(float);
  void Print();
  Complexe Sum(const Complexe&);
  void Sum1(const Complexe&);
  Complexe Sum2(const Complexe&);
  Complexe Sum3(const Complexe&);
  Complexe& Sum4(const Complexe&);
  bool Identical(const Complexe&);
  Complexe& operator=(const Complexe& );
  Complexe operator+(const Complexe&);
  Complexe operator-(const Complexe&);
  Complexe operator*(const Complexe&);
  Complexe operator/(const Complexe&);
  Complexe operator*(const int&);
  friend Complexe operator*(const int&, const Complexe&);
  friend ostream& operator<<(ostream& ,const Complexe&);

};




#endif
