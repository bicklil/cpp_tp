#ifndef etudiant1
#define etudiant1

#include "Personne.h"
#include <string>
using namespace std;

class Etudiant1: public Personne
{
  private:
    int nb;
    int* notes;

  public:
    Etudiant1(string,string,int,int);
    Etudiant1(const Etudiant1&);
    ~Etudiant1();
    void Affic();
    void ajouterNotes(int*);
    float moyenne();

};

#endif
