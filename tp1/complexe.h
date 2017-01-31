#ifndef complexe
#define  complexe

  typedef struct Complexe{
    float a;
    float b;
    unsigned  int ident;
  }Complexe;

  void AfficherComplexe(const Complexe&);
  Complexe Somme(const Complexe&, const Complexe&);
  Complexe Produit(const Complexe&, const Complexe&);
  float Module(const Complexe&);
  Complexe Conjuge(const Complexe& );
  void Init(Complexe&);


#endif
