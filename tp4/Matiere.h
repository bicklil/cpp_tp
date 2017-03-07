#ifndef matiere
#define matiere

#include <string>
using namespace std;

class Matiere
{
  private:
    string nom;
    int coef;
  public:
    Matiere();
    Matiere(string,int);
    void Affic();
    Matiere& operator=(const Matiere&);
    string GetNom();
    int GetCoef();
};
#endif
