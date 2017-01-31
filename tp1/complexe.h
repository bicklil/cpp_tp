#ifndef complexe
#define  complexe

  typedef struct Complexe{
    float a;
    float b;
    unsigned  int ident;
  }Complexe;

  typedef Complexe* ptComplexe;

  void AfficherComplexe(const Complexe&);
  Complexe Somme(const Complexe&, const Complexe&);
  Complexe Produit(const Complexe&, const Complexe&);
  float Module(const Complexe&);
  Complexe Conjuge(const Complexe& );
  void Init(Complexe&);
  //void CreerComplexe(ptComplexe*& );
  Complexe* CreerComplexe();
  Complexe* CreerVecteurComplexes(unsigned int);
  void CreerComplexe(Complexe** );



#endif
