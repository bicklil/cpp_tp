#ifndef etudiant2
#define etudiant2

#include "Etudiant1.h"
#include "Matiere.h"
#include <string>

using namespace std;

class Etudiant2 : public Etudiant1
{
  private:
    Matiere* tabMatiere;
  public:
    Etudiant2(string,string,int,int,Matiere*);
    Etudiant2(const Etudiant2&);
    ~Etudiant2();
    void Affic();
    int Moyenne();
    Etudiant2& operator=(const Etudiant2&);
};

#endif
