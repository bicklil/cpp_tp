#ifndef personne
#define personne

#include <string>
using namespace std;

class Personne{
  private:
    string nom,prenom;
    int age;
  public:
    Personne(string,string,int);
    void Affic();
    void vieillir();
};

#endif
