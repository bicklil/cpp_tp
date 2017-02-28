#ifndef professeur
#define professeur

#include "Personne.h"
#include <string>
using namespace std;

class Professeur: public Personne
{
  private:
    string status;
    int heures;
  public:
    Professeur(string,string,int,string);
    void Affic();
    void Travailler(int);
};

#endif
