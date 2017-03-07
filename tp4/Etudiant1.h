#ifndef etudiant1
#define etudiant1

#include "Personne.h"
#include <string>
using namespace std;

class Etudiant1: public Personne
{
  private:
    int nb;
    float* notes;

  public:
    Etudiant1(string,string,int,int);
    Etudiant1(const Etudiant1&);
    ~Etudiant1();
    int GetNb()const;
    float* GetNotes()const;
    void Affic();
    void ajouterNotes(float*);
    float Moyenne();
    Etudiant1& operator=(const Etudiant1&);

};

#endif
