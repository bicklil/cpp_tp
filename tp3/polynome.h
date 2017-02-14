#ifndef polynome
#define polynome

class Polynome {
private:
  float* coeff;
  int deg;
public:
  Polynome();
  Polynome(int, int*);
  Polynome(const Polynome&);
  ~Polynome();
  Polynome& operator=(const Polynome&);
};
#endif
